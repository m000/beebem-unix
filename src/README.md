# beebem-unix source

This file provides high-level overview of the source files.
This is to help refactoring beebem-unix and make it work on both Linux + MacOS.

## File origins
The origin of files are as following:
* **legacy**: Straight from the beebem-unix tarball.
* **beebwin**: Copied from beebem-win codebase.
* **deprct**: Deprecated. To be replaced by either a new or a beebwin file.
* **new**: Newly added to replace legacy functionality.
* **compat**: Newly added to provide compatibility with code from beebwin.

## Directory layout
The directory layout is as following:
* **TBA**

## List of files

| Filename                               | Origin  | Notes                                                             | Action       |
| -------------------------------------- | ------- | ----------------------------------------------------------------- | ------------ |
| 6502core.cpp                           | legacy  |                                                                   |              |
| 6502core.h                             | legacy  |                                                                   |              |
| atodconv.cpp                           | legacy  |                                                                   |              |
| atodconv.h                             | legacy  |                                                                   |              |
| avi.cpp                                | legacy  |                                                                   |              |
| avi.h                                  | legacy  |                                                                   |              |
| beebem.h                               | legacy  |                                                                   |              |
| beebem_pages.cpp                       | legacy  |                                                                   |              |
| beebem_pages.h                         | legacy  |                                                                   |              |
| beebem_pages_disks.cpp                 | legacy  |                                                                   |              |
| beebem_pages_disks.h                   | legacy  |                                                                   |              |
| beebemrc.h                             | legacy  |                                                                   |              |
| beebmem.cpp                            | legacy  |                                                                   |              |
| beebmem.h                              | legacy  |                                                                   |              |
| beebsound.cpp                          | legacy  |                                                                   |              |
| beebsound.h                            | legacy  |                                                                   |              |
| beebwin.cpp                            | legacy  |                                                                   |              |
| beebwin.h                              | legacy  |                                                                   |              |
| cregistry.cpp                          | legacy  |                                                                   |              |
| cregistry.h                            | legacy  |                                                                   |              |
| csw.cpp                                | legacy  |                                                                   |              |
| csw.h                                  | legacy  |                                                                   |              |
| debug.cpp                              | legacy  |                                                                   |              |
| debug.h                                | legacy  |                                                                   |              |
| disc1770.cpp                           | legacy  |                                                                   |              |
| disc1770.h                             | legacy  |                                                                   |              |
| disc8271.cpp                           | legacy  |                                                                   |              |
| disc8271.h                             | legacy  |                                                                   |              |
| ea.h                                   | legacy  |                                                                   |              |
| econet.cpp                             | legacy  |                                                                   |              |
| econet.h                               | legacy  |                                                                   |              |
| fake_registry.c                        | legacy  |                                                                   |              |
| fake_registry.h                        | legacy  |                                                                   |              |
| gui/box.c                              | legacy  |                                                                   |              |
| gui/box.h                              | legacy  |                                                                   |              |
| gui/box_private.h                      | legacy  |                                                                   |              |
| gui/button.c                           | legacy  |                                                                   |              |
| gui/button.h                           | legacy  |                                                                   |              |
| gui/button_private.h                   | legacy  |                                                                   |              |
| gui/functions.c                        | legacy  |                                                                   |              |
| gui/functions.h                        | legacy  |                                                                   |              |
| gui/gui.h                              | legacy  |                                                                   |              |
| gui/guisdl.h                           | legacy  |                                                                   |              |
| gui/label.c                            | legacy  |                                                                   |              |
| gui/label.h                            | legacy  |                                                                   |              |
| gui/label_private.h                    | legacy  |                                                                   |              |
| gui/messagebox.c                       | legacy  |                                                                   |              |
| gui/messagebox.h                       | legacy  |                                                                   |              |
| gui/progressbar.c                      | legacy  |                                                                   |              |
| gui/progressbar.h                      | legacy  |                                                                   |              |
| gui/progressbar_private.h              | legacy  |                                                                   |              |
| gui/radiobutton.c                      | legacy  |                                                                   |              |
| gui/radiobutton.h                      | legacy  |                                                                   |              |
| gui/radiobutton_private.h              | legacy  |                                                                   |              |
| gui/radiogroup.c                       | legacy  |                                                                   |              |
| gui/radiogroup.h                       | legacy  |                                                                   |              |
| gui/radiogroup_private.h               | legacy  |                                                                   |              |
| gui/sdl.c                              | legacy  |                                                                   |              |
| gui/slidebar.c                         | legacy  |                                                                   |              |
| gui/slidebar.h                         | legacy  |                                                                   |              |
| gui/slidebar_private.h                 | legacy  |                                                                   |              |
| gui/tabgroup.c                         | legacy  |                                                                   |              |
| gui/tabgroup.h                         | legacy  |                                                                   |              |
| gui/tabgroup_private.h                 | legacy  |                                                                   |              |
| gui/tabpage.c                          | legacy  |                                                                   |              |
| gui/tabpage.h                          | legacy  |                                                                   |              |
| gui/tabpage_private.h                  | legacy  |                                                                   |              |
| gui/tickbox.c                          | legacy  |                                                                   |              |
| gui/tickbox.h                          | legacy  |                                                                   |              |
| gui/tickbox_private.h                  | legacy  |                                                                   |              |
| gui/togglebutton.c                     | legacy  |                                                                   |              |
| gui/togglebutton.h                     | legacy  |                                                                   |              |
| gui/togglebutton_private.h             | legacy  |                                                                   |              |
| gui/widget.c                           | legacy  |                                                                   |              |
| gui/widget.h                           | legacy  |                                                                   |              |
| gui/widget_private.h                   | legacy  |                                                                   |              |
| gui/widget_shared.c                    | legacy  |                                                                   |              |
| gui/widget_shared.h                    | legacy  |                                                                   |              |
| gui/window.c                           | legacy  |                                                                   |              |
| gui/window.h                           | legacy  |                                                                   |              |
| gui/window_private.h                   | legacy  |                                                                   |              |
| hardware.cpp                           | legacy  |                                                                   |              |
| hardware.h                             | legacy  |                                                                   |              |
| i386dasm.cpp                           | legacy  |                                                                   |              |
| i86.cpp                                | legacy  |                                                                   |              |
| i86.h                                  | legacy  |                                                                   |              |
| instr86.h                              | legacy  |                                                                   |              |
| log.c                                  | legacy  |                                                                   |              |
| log.h                                  | legacy  |                                                                   |              |
| main.cpp                               | legacy  |                                                                   |              |
| main.h                                 | legacy  |                                                                   |              |
| osd_cpu.h                              | legacy  |                                                                   |              |
| port.h                                 | legacy  |                                                                   |              |
| preferences.cpp                        | beebwin | Loads/Saves preferences to/from C++ map. Registry-like api.       |              |
| preferences.h                          | beebwin | Loads/Saves preferences to/from C++ map. Registry-like api.       |              |
| sasi.cpp                               | legacy  |                                                                   |              |
| sasi.h                                 | legacy  |                                                                   |              |
| scsi.cpp                               | legacy  |                                                                   |              |
| scsi.h                                 | legacy  |                                                                   |              |
| serial.cpp                             | legacy  |                                                                   |              |
| serial.h                               | legacy  |                                                                   |              |
| serialdevices.cpp                      | legacy  |                                                                   |              |
| serialdevices.h                        | legacy  |                                                                   |              |
| speech.cpp                             | legacy  |                                                                   |              |
| speech.h                               | legacy  |                                                                   |              |
| sysvia.cpp                             | legacy  |                                                                   |              |
| sysvia.h                               | legacy  |                                                                   |              |
| teletext.cpp                           | legacy  |                                                                   |              |
| teletext.h                             | legacy  |                                                                   |              |
| tube.cpp                               | legacy  |                                                                   |              |
| tube.h                                 | legacy  |                                                                   |              |
| uef.cpp                                | legacy  |                                                                   |              |
| uef.h                                  | legacy  |                                                                   |              |
| uefstate.cpp                           | legacy  |                                                                   |              |
| uefstate.h                             | legacy  |                                                                   |              |
| unix/beebsdl.cpp                       | legacy  |                                                                   |              |
| unix/beebsdl.h                         | legacy  |                                                                   |              |
| unix/beebsdl_new.h                     | legacy  |                                                                   |              |
| unix/line.h                            | legacy  |                                                                   |              |
| unix/registry.h                        | legacy  |                                                                   |              |
| unix/types.h                           | legacy  |                                                                   |              |
| user_config.c                          | legacy  |                                                                   |              |
| user_config.h                          | legacy  |                                                                   |              |
| userkybd.cpp                           | legacy  |                                                                   |              |
| userkybd.h                             | legacy  |                                                                   |              |
| uservia.cpp                            | legacy  |                                                                   |              |
| uservia.h                              | legacy  |                                                                   |              |
| via.cpp                                | legacy  |                                                                   |              |
| via.h                                  | legacy  |                                                                   |              |
| viastate.h                             | legacy  |                                                                   |              |
| video.cpp                              | legacy  |                                                                   |              |
| video.h                                | legacy  |                                                                   |              |
| windows.cpp                            | legacy  |                                                                   |              |
| windows.h                              | legacy  |                                                                   |              |
| z80.cpp                                | legacy  |                                                                   |              |
| z80.h                                  | legacy  |                                                                   |              |
| z80_support.cpp                        | legacy  |                                                                   |              |
| z80dis.cpp                             | legacy  |                                                                   |              |
| z80mem.h                               | legacy  |                                                                   |              |
| zlib/zconf.h                           | legacy  | Headers for using (the ancient) libz found in 90s Unix variants.  | sync w. win  |
| zlib/zlib.h                            | legacy  | Headers for using (the ancient) libz found in 90s Unix variants.  | sync w. win  |
