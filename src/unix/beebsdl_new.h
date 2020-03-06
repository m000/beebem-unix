/****************************************************************
BeebEm - BBC Micro and Master 128 Emulator

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public 
License along with this program; if not, write to the Free 
Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
Boston, MA  02110-1301, USA.
****************************************************************/
#pragma once
#include "beebwin.h"

extern int done;
extern BeebWin *mainWin;

// Width and height for the screen area drawn by the emulator code.
#define BEEBSDL_VIDEO_W 800
#define BEEBSDL_VIDEO_H 600

// Sound related defs.
#define BEEBSDL_SAMPLE_RATE 22050

// Flag for enabling/disabling blocks related to sound.
// XXX: Disabled because this shouldn't work yet.
#define BEEBSDL_HAVE_SOUND false

class BeebSDL
{
  public:
    BeebSDL(int argc, char *argv[]);
    ~BeebSDL();
    void CreateScreen(Uint32 mode, bool fullscreen);
    void CreateScreen(Uint32 mode);
    void CreateScreen(void);
    void DestroyScreen(void);
    Uint32 ScaleValue(Uint32 v);

    bool cfg_x11 = false;

    // temp public
    SDL_Surface *video = nullptr;
    SDL_Surface *screen = nullptr;

  private:
    void GetModeResolutionInfo(Uint32 mode, Uint32 *w, Uint32 *h, bool *highres);
    SDL_Surface *icon = nullptr;
    Uint32 scaling_table[1024];

    Uint32 scr_mode = -1;   // screen mode (defined in XXX)
    Uint32 scr_w = 0;       // screen width
    Uint32 scr_h = 0;       // screen height
    Uint32 scr_flags = 0;   // screen flags
    bool scr_highres = 0;   // high resolution mode?
};

inline void BeebSDL::CreateScreen(void)
{
    this->CreateScreen(this->scr_mode);
}

inline void BeebSDL::DestroyScreen(void)
{
    if (this->screen != nullptr)
        SDL_FreeSurface(this->screen);
}

inline Uint32 BeebSDL::ScaleValue(Uint32 v)
{
    if (v >= 1024)
        return 0;
    else
        return this->scaling_table[v];
}


extern BeebSDL *beebSDL;

/* XXX: If not used from C, function should be method of the BeebWin class. */
inline void Quit(void)
{
    done = 1;
}

/* XXX: If not used from C, function should be method of the BeebWin class. */
static inline bool IsFullScreen(void)
{
    return (mainWin == NULL) ? false : mainWin->IsFullScreen();
}

/* XXX: If not used from C, function should be method of the BeebWin class. */
static inline void ToggleFullscreen(void)
{
    if (IsFullScreen())
    {
        mainWin->SetFullScreenToggle(false);
        SetFullScreenTickbox(false);
    }
    else
    {
        mainWin->SetFullScreenToggle(true);
        SetFullScreenTickbox(true);
    }

    // XXX: How is the full screen flag propagated?
    beebSDL->CreateScreen();

    /*
     * But we need to update the GUI here.
     * XXX: Messy. Can this be done elsewhere?
     */
    ClearWindowsBackgroundCacheAndResetSurface();
    ClearVideoWindow();

    return;
}

