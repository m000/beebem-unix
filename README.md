# beebem-unix

BeebEm is a popular [Acorn BBC Micro][wiki-bbc-b] and [Master 128][wiki-bbc-master] emulator.

Development of BeebEm started in 1994 by [David Gilbert][dgilbert] on
UNIX, and has since been ported to many other platforms, most notably
Microsoft Windows and MacOS X.
There are many versions of BeebEm floating around, and each version has
a different set of features. This version of BeebEm for UNIX is an SDL
port of the Windows version of BeebEm.

This repository starts off the [last version][beebem-orig-dl] that was
available online. The goal is to bring the code up to date with modern
Linux *and* MacOS.

**!!!BeebEm Unix is still WiP!!!**

## Status
With BeebEm being a smallish project, the first step towards this was
to get rid of the [autotools][autotools] monstrosity and replace it with
[CMake][cmake].

Right now BeebEm does compile on both Linux (tested on Ubuntu 18.04)
and MacOS (with prerequisites installed with [Homebrew][homebrew]).
There are a ton of warnings though because of outmoded coding style in
some parts of the codebase. These parts are mostly related to faking
off Windows registry fuctionality.

After compiling, you will probably get a window and a BBC prompt.
Not much testing has been done beyond that.

## Features

### Current feature list
As of the current release, the following features are available to you
(in various states of completion and testing).
The list is directly copied from the last [BeebEm Unix home][beebem-orig].

* Emulation of BBC model B, B+, Integra Board and Master 128.
* Support for Acorn 65C02, Acorn Z80, Torch Z80 and Acorn 80186 second processors.
* GUI is displayed over the video window and soon will be 100% SDL code (like Hatari).
* 8271 and 1770 Floppy disc support.
* Tape emulation.
* Sound support.
* QWERTY keyboard mapping.
* AMX mouse support.
* Acorn speech chip emulation.
* Mike's new exponential volume.
* Econet support.
* SASI/SCSI hard drive emulation.
* Microvitec touch screen.
* Temporary hack to allow 320x240 and 320x256 video resolutions.

### Possible future improvements
* Improve performance of video emulation (for SDL).
* Proper sound integration (like the Windows version) instead of the current hack.
* A debugger.
* Native file selector and removal of the dependency on GTK.
* Improved keyboard support.

## Compiling

You will need to have SDL, GTK+-2 and zlib installed, along with their development
headers. To compile with CMake all you need to do is:

```bash
mkdir build
cd build
cmake ..
make
```

Right now, you should run BeebEm from the build directory.
Installation process will be ironed-out in the future.

[beebem-orig]: http://beebem-unix.bbcmicro.com/index.html
[beebem-orig-dl]: http://beebem-unix.bbcmicro.com/download.html
[wiki-bbc-b]: http://en.wikipedia.org/wiki/BBC_B
[wiki-bbc-master]: http://en.wikipedia.org/wiki/BBC_Master
[dgilbert]: http://www.treblig.org/
[autotools]: https://en.wikipedia.org/wiki/GNU_Autotools
[cmake]: https://cmake.org/
[homebrew]: https://brew.sh

