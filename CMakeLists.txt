cmake_minimum_required(VERSION 3.5)
project(beebem-unix
    VERSION 0.0.13
    LANGUAGES C CXX
)
message("Project: ${CMAKE_PROJECT_NAME} ${PROJECT_VERSION}")

# Compiler settings.
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Souce files to use.
file(GLOB beebem_src
    "src/*.h"
    "src/*.c"
    "src/*.cpp"
    "src/gui/*.h"
    "src/gui/*.c"
)

# Check for libraries.
find_package(PkgConfig REQUIRED)
PKG_CHECK_MODULES(SDL REQUIRED sdl)
PKG_CHECK_MODULES(GTK2 REQUIRED gtk+-2.0)
PKG_CHECK_MODULES(ZLIB REQUIRED zlib)

# Set definitions for compilation.
add_definitions(
    -DPACKAGE="${CMAKE_PROJECT_NAME}"
    -DVERSION="${PROJECT_VERSION}"
    -DDATA_DIR="${PROJECT_SOURCE_DIR}/data"
    -DREG_FILENAME="beebem.registry"
    -DWITH_UNIX_EXTRAS
    -DHAVE_ZLIB=${ZLIB_FOUND}
)

# Set include directories for compilation.
include_directories(
    src
    ${SDL_INCLUDE_DIRS}
    ${GTK2_INCLUDE_DIRS}
    ${ZLIB_INCLUDE_DIRS}
)

# Add target executable.
add_executable(beebem ${beebem_src})
target_link_libraries(beebem
    ${SDL_LIBRARIES}
    ${GTK2_LIBRARIES}
    ${ZLIB_LIBRARIES}
)

get_cmake_property(_variableNames VARIABLES)
list (SORT _variableNames)
foreach (_variableName ${_variableNames})
    message(STATUS "${_variableName}=${${_variableName}}")
endforeach()
