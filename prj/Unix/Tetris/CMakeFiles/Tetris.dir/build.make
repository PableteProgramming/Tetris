# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /media/sf_WindowsSharedFolder/Tetris

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /media/sf_WindowsSharedFolder/Tetris/prj/Unix

# Include any dependencies generated for this target.
include Tetris/CMakeFiles/Tetris.dir/depend.make

# Include the progress variables for this target.
include Tetris/CMakeFiles/Tetris.dir/progress.make

# Include the compile flags for this target's objects.
include Tetris/CMakeFiles/Tetris.dir/flags.make

Tetris/CMakeFiles/Tetris.dir/src/all.cpp.o: Tetris/CMakeFiles/Tetris.dir/flags.make
Tetris/CMakeFiles/Tetris.dir/src/all.cpp.o: ../../Tetris/src/all.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/media/sf_WindowsSharedFolder/Tetris/prj/Unix/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Tetris/CMakeFiles/Tetris.dir/src/all.cpp.o"
	cd /media/sf_WindowsSharedFolder/Tetris/prj/Unix/Tetris && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Tetris.dir/src/all.cpp.o -c /media/sf_WindowsSharedFolder/Tetris/Tetris/src/all.cpp

Tetris/CMakeFiles/Tetris.dir/src/all.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Tetris.dir/src/all.cpp.i"
	cd /media/sf_WindowsSharedFolder/Tetris/prj/Unix/Tetris && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /media/sf_WindowsSharedFolder/Tetris/Tetris/src/all.cpp > CMakeFiles/Tetris.dir/src/all.cpp.i

Tetris/CMakeFiles/Tetris.dir/src/all.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Tetris.dir/src/all.cpp.s"
	cd /media/sf_WindowsSharedFolder/Tetris/prj/Unix/Tetris && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /media/sf_WindowsSharedFolder/Tetris/Tetris/src/all.cpp -o CMakeFiles/Tetris.dir/src/all.cpp.s

Tetris/CMakeFiles/Tetris.dir/src/main.cpp.o: Tetris/CMakeFiles/Tetris.dir/flags.make
Tetris/CMakeFiles/Tetris.dir/src/main.cpp.o: ../../Tetris/src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/media/sf_WindowsSharedFolder/Tetris/prj/Unix/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object Tetris/CMakeFiles/Tetris.dir/src/main.cpp.o"
	cd /media/sf_WindowsSharedFolder/Tetris/prj/Unix/Tetris && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Tetris.dir/src/main.cpp.o -c /media/sf_WindowsSharedFolder/Tetris/Tetris/src/main.cpp

Tetris/CMakeFiles/Tetris.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Tetris.dir/src/main.cpp.i"
	cd /media/sf_WindowsSharedFolder/Tetris/prj/Unix/Tetris && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /media/sf_WindowsSharedFolder/Tetris/Tetris/src/main.cpp > CMakeFiles/Tetris.dir/src/main.cpp.i

Tetris/CMakeFiles/Tetris.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Tetris.dir/src/main.cpp.s"
	cd /media/sf_WindowsSharedFolder/Tetris/prj/Unix/Tetris && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /media/sf_WindowsSharedFolder/Tetris/Tetris/src/main.cpp -o CMakeFiles/Tetris.dir/src/main.cpp.s

# Object files for target Tetris
Tetris_OBJECTS = \
"CMakeFiles/Tetris.dir/src/all.cpp.o" \
"CMakeFiles/Tetris.dir/src/main.cpp.o"

# External object files for target Tetris
Tetris_EXTERNAL_OBJECTS =

../../output/GNU/Tetris: Tetris/CMakeFiles/Tetris.dir/src/all.cpp.o
../../output/GNU/Tetris: Tetris/CMakeFiles/Tetris.dir/src/main.cpp.o
../../output/GNU/Tetris: Tetris/CMakeFiles/Tetris.dir/build.make
../../output/GNU/Tetris: SFML/lib/libsfml-graphics.a
../../output/GNU/Tetris: SFML/lib/libsfml-window.a
../../output/GNU/Tetris: SFML/lib/libsfml-system.a
../../output/GNU/Tetris: SFML/lib/libsfml-audio.a
../../output/GNU/Tetris: /usr/lib/x86_64-linux-gnu/libOpenGL.so
../../output/GNU/Tetris: /usr/lib/x86_64-linux-gnu/libGLX.so
../../output/GNU/Tetris: /usr/lib/x86_64-linux-gnu/libGLU.so
../../output/GNU/Tetris: /usr/lib/x86_64-linux-gnu/libudev.so
../../output/GNU/Tetris: /usr/lib/x86_64-linux-gnu/libOpenGL.so
../../output/GNU/Tetris: /usr/lib/x86_64-linux-gnu/libGLX.so
../../output/GNU/Tetris: /usr/lib/x86_64-linux-gnu/libGLU.so
../../output/GNU/Tetris: /usr/lib/x86_64-linux-gnu/libX11.so
../../output/GNU/Tetris: /usr/lib/x86_64-linux-gnu/libXrandr.so
../../output/GNU/Tetris: /usr/lib/x86_64-linux-gnu/libfreetype.so
../../output/GNU/Tetris: SFML/lib/libsfml-system.a
../../output/GNU/Tetris: /usr/lib/x86_64-linux-gnu/libopenal.so
../../output/GNU/Tetris: /usr/lib/x86_64-linux-gnu/libvorbisenc.so
../../output/GNU/Tetris: /usr/lib/x86_64-linux-gnu/libvorbisfile.so
../../output/GNU/Tetris: /usr/lib/x86_64-linux-gnu/libvorbis.so
../../output/GNU/Tetris: /usr/lib/x86_64-linux-gnu/libogg.so
../../output/GNU/Tetris: /usr/lib/x86_64-linux-gnu/libFLAC.so
../../output/GNU/Tetris: Tetris/CMakeFiles/Tetris.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/media/sf_WindowsSharedFolder/Tetris/prj/Unix/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ../../../output/GNU/Tetris"
	cd /media/sf_WindowsSharedFolder/Tetris/prj/Unix/Tetris && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Tetris.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Tetris/CMakeFiles/Tetris.dir/build: ../../output/GNU/Tetris

.PHONY : Tetris/CMakeFiles/Tetris.dir/build

Tetris/CMakeFiles/Tetris.dir/clean:
	cd /media/sf_WindowsSharedFolder/Tetris/prj/Unix/Tetris && $(CMAKE_COMMAND) -P CMakeFiles/Tetris.dir/cmake_clean.cmake
.PHONY : Tetris/CMakeFiles/Tetris.dir/clean

Tetris/CMakeFiles/Tetris.dir/depend:
	cd /media/sf_WindowsSharedFolder/Tetris/prj/Unix && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /media/sf_WindowsSharedFolder/Tetris /media/sf_WindowsSharedFolder/Tetris/Tetris /media/sf_WindowsSharedFolder/Tetris/prj/Unix /media/sf_WindowsSharedFolder/Tetris/prj/Unix/Tetris /media/sf_WindowsSharedFolder/Tetris/prj/Unix/Tetris/CMakeFiles/Tetris.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Tetris/CMakeFiles/Tetris.dir/depend

