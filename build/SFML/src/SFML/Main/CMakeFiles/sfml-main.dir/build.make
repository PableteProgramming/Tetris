# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\curro.LAPTOP-DUBBS74R\OneDrive\Documentos\Programming\C++\Tetris

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\curro.LAPTOP-DUBBS74R\OneDrive\Documentos\Programming\C++\Tetris\build

# Include any dependencies generated for this target.
include SFML/src/SFML/Main/CMakeFiles/sfml-main.dir/depend.make

# Include the progress variables for this target.
include SFML/src/SFML/Main/CMakeFiles/sfml-main.dir/progress.make

# Include the compile flags for this target's objects.
include SFML/src/SFML/Main/CMakeFiles/sfml-main.dir/flags.make

SFML/src/SFML/Main/CMakeFiles/sfml-main.dir/MainWin32.cpp.obj: SFML/src/SFML/Main/CMakeFiles/sfml-main.dir/flags.make
SFML/src/SFML/Main/CMakeFiles/sfml-main.dir/MainWin32.cpp.obj: SFML/src/SFML/Main/CMakeFiles/sfml-main.dir/includes_CXX.rsp
SFML/src/SFML/Main/CMakeFiles/sfml-main.dir/MainWin32.cpp.obj: ../SFML/src/SFML/Main/MainWin32.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\curro.LAPTOP-DUBBS74R\OneDrive\Documentos\Programming\C++\Tetris\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object SFML/src/SFML/Main/CMakeFiles/sfml-main.dir/MainWin32.cpp.obj"
	cd /d C:\Users\curro.LAPTOP-DUBBS74R\OneDrive\Documentos\Programming\C++\Tetris\build\SFML\src\SFML\Main && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\sfml-main.dir\MainWin32.cpp.obj -c C:\Users\curro.LAPTOP-DUBBS74R\OneDrive\Documentos\Programming\C++\Tetris\SFML\src\SFML\Main\MainWin32.cpp

SFML/src/SFML/Main/CMakeFiles/sfml-main.dir/MainWin32.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sfml-main.dir/MainWin32.cpp.i"
	cd /d C:\Users\curro.LAPTOP-DUBBS74R\OneDrive\Documentos\Programming\C++\Tetris\build\SFML\src\SFML\Main && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\curro.LAPTOP-DUBBS74R\OneDrive\Documentos\Programming\C++\Tetris\SFML\src\SFML\Main\MainWin32.cpp > CMakeFiles\sfml-main.dir\MainWin32.cpp.i

SFML/src/SFML/Main/CMakeFiles/sfml-main.dir/MainWin32.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sfml-main.dir/MainWin32.cpp.s"
	cd /d C:\Users\curro.LAPTOP-DUBBS74R\OneDrive\Documentos\Programming\C++\Tetris\build\SFML\src\SFML\Main && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\curro.LAPTOP-DUBBS74R\OneDrive\Documentos\Programming\C++\Tetris\SFML\src\SFML\Main\MainWin32.cpp -o CMakeFiles\sfml-main.dir\MainWin32.cpp.s

# Object files for target sfml-main
sfml__main_OBJECTS = \
"CMakeFiles/sfml-main.dir/MainWin32.cpp.obj"

# External object files for target sfml-main
sfml__main_EXTERNAL_OBJECTS =

SFML/lib/libsfml-main-d.a: SFML/src/SFML/Main/CMakeFiles/sfml-main.dir/MainWin32.cpp.obj
SFML/lib/libsfml-main-d.a: SFML/src/SFML/Main/CMakeFiles/sfml-main.dir/build.make
SFML/lib/libsfml-main-d.a: SFML/src/SFML/Main/CMakeFiles/sfml-main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\curro.LAPTOP-DUBBS74R\OneDrive\Documentos\Programming\C++\Tetris\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library ..\..\..\lib\libsfml-main-d.a"
	cd /d C:\Users\curro.LAPTOP-DUBBS74R\OneDrive\Documentos\Programming\C++\Tetris\build\SFML\src\SFML\Main && $(CMAKE_COMMAND) -P CMakeFiles\sfml-main.dir\cmake_clean_target.cmake
	cd /d C:\Users\curro.LAPTOP-DUBBS74R\OneDrive\Documentos\Programming\C++\Tetris\build\SFML\src\SFML\Main && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\sfml-main.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
SFML/src/SFML/Main/CMakeFiles/sfml-main.dir/build: SFML/lib/libsfml-main-d.a

.PHONY : SFML/src/SFML/Main/CMakeFiles/sfml-main.dir/build

SFML/src/SFML/Main/CMakeFiles/sfml-main.dir/clean:
	cd /d C:\Users\curro.LAPTOP-DUBBS74R\OneDrive\Documentos\Programming\C++\Tetris\build\SFML\src\SFML\Main && $(CMAKE_COMMAND) -P CMakeFiles\sfml-main.dir\cmake_clean.cmake
.PHONY : SFML/src/SFML/Main/CMakeFiles/sfml-main.dir/clean

SFML/src/SFML/Main/CMakeFiles/sfml-main.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\curro.LAPTOP-DUBBS74R\OneDrive\Documentos\Programming\C++\Tetris C:\Users\curro.LAPTOP-DUBBS74R\OneDrive\Documentos\Programming\C++\Tetris\SFML\src\SFML\Main C:\Users\curro.LAPTOP-DUBBS74R\OneDrive\Documentos\Programming\C++\Tetris\build C:\Users\curro.LAPTOP-DUBBS74R\OneDrive\Documentos\Programming\C++\Tetris\build\SFML\src\SFML\Main C:\Users\curro.LAPTOP-DUBBS74R\OneDrive\Documentos\Programming\C++\Tetris\build\SFML\src\SFML\Main\CMakeFiles\sfml-main.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : SFML/src/SFML/Main/CMakeFiles/sfml-main.dir/depend

