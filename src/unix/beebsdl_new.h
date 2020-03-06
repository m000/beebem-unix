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

class BeebSDL
{
  public:
    BeebSDL(int argc, char *argv[]);
    ~BeebSDL();
    Uint32 ScaleValue(Uint32 v);

    bool cfg_x11 = false;

    // temp public
    SDL_Surface *video = nullptr;

  private:
    SDL_Surface *icon = nullptr;
    Uint32 scaling_table[1024];
};

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

    Destroy_Screen();
    if (Create_Screen() != 1)
    {
        qFATAL("Could not recreate SDL window!\n");
        exit(10);
    }

    /*
     * But we need to update the GUI here.
     * XXX: Messy. Can this be done elsewhere?
     */
    ClearWindowsBackgroundCacheAndResetSurface();
    ClearVideoWindow();

    return;
}

