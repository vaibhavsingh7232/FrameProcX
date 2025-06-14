cmake_minimum_required(VERSION 3.22.1)

set(CMAKE_VERBOSE_MAKEFILE on)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -frtti -fexceptions")

add_library( # Sets the name of the library.
        img_proc_x

        # Sets the library as a shared library.
        SHARED

        # Provides a relative path to your source file(s).
        src/main/cpp/img_proc_x.cpp
        src/main/cpp/gl_render_x.cpp
        src/main/cpp/jni_help_x.cpp )

find_library( # Sets the name of the path variable.
        log-libX

        # Specifies the name of the NDK library that
        # you want CMake to locate.
        log )

target_link_libraries( # Specifies the target library.
        img_proc_x
        GLESv2
        EGL
        ${log-libX} )