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
include app/CMakeFiles/Tetris.dir/depend.make

# Include the progress variables for this target.
include app/CMakeFiles/Tetris.dir/progress.make

# Include the compile flags for this target's objects.
include app/CMakeFiles/Tetris.dir/flags.make

app/CMakeFiles/Tetris.dir/src/Manager.cpp.obj: app/CMakeFiles/Tetris.dir/flags.make
app/CMakeFiles/Tetris.dir/src/Manager.cpp.obj: app/CMakeFiles/Tetris.dir/includes_CXX.rsp
app/CMakeFiles/Tetris.dir/src/Manager.cpp.obj: ../app/src/Manager.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\curro.LAPTOP-DUBBS74R\OneDrive\Documentos\Programming\C++\Tetris\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object app/CMakeFiles/Tetris.dir/src/Manager.cpp.obj"
	cd /d C:\Users\curro.LAPTOP-DUBBS74R\OneDrive\Documentos\Programming\C++\Tetris\build\app && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Tetris.dir\src\Manager.cpp.obj -c C:\Users\curro.LAPTOP-DUBBS74R\OneDrive\Documentos\Programming\C++\Tetris\app\src\Manager.cpp

app/CMakeFiles/Tetris.dir/src/Manager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Tetris.dir/src/Manager.cpp.i"
	cd /d C:\Users\curro.LAPTOP-DUBBS74R\OneDrive\Documentos\Programming\C++\Tetris\build\app && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\curro.LAPTOP-DUBBS74R\OneDrive\Documentos\Programming\C++\Tetris\app\src\Manager.cpp > CMakeFiles\Tetris.dir\src\Manager.cpp.i

app/CMakeFiles/Tetris.dir/src/Manager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Tetris.dir/src/Manager.cpp.s"
	cd /d C:\Users\curro.LAPTOP-DUBBS74R\OneDrive\Documentos\Programming\C++\Tetris\build\app && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\curro.LAPTOP-DUBBS74R\OneDrive\Documentos\Programming\C++\Tetris\app\src\Manager.cpp -o CMakeFiles\Tetris.dir\src\Manager.cpp.s

app/CMakeFiles/Tetris.dir/src/Rect.cpp.obj: app/CMakeFiles/Tetris.dir/flags.make
app/CMakeFiles/Tetris.dir/src/Rect.cpp.obj: app/CMakeFiles/Tetris.dir/includes_CXX.rsp
app/CMakeFiles/Tetris.dir/src/Rect.cpp.obj: ../app/src/Rect.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\curro.LAPTOP-DUBBS74R\OneDrive\Documentos\Programming\C++\Tetris\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object app/CMakeFiles/Tetris.dir/src/Rect.cpp.obj"
	cd /d C:\Users\curro.LAPTOP-DUBBS74R\OneDrive\Documentos\Programming\C++\Tetris\build\app && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Tetris.dir\src\Rect.cpp.obj -c C:\Users\curro.LAPTOP-DUBBS74R\OneDrive\Documentos\Programming\C++\Tetris\app\src\Rect.cpp

app/CMakeFiles/Tetris.dir/src/Rect.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Tetris.dir/src/Rect.cpp.i"
	cd /d C:\Users\curro.LAPTOP-DUBBS74R\OneDrive\Documentos\Programming\C++\Tetris\build\app && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\curro.LAPTOP-DUBBS74R\OneDrive\Documentos\Programming\C++\Tetris\app\src\Rect.cpp > CMakeFiles\Tetris.dir\src\Rect.cpp.i

app/CMakeFiles/Tetris.dir/src/Rect.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Tetris.dir/src/Rect.cpp.s"
	cd /d C:\Users\curro.LAPTOP-DUBBS74R\OneDrive\Documentos\Programming\C++\Tetris\build\app && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\curro.LAPTOP-DUBBS74R\OneDrive\Documentos\Programming\C++\Tetris\app\src\Rect.cpp -o CMakeFiles\Tetris.dir\src\Rect.cpp.s

app/CMakeFiles/Tetris.dir/src/Object.cpp.obj: app/CMakeFiles/Tetris.dir/flags.make
app/CMakeFiles/Tetris.dir/src/Object.cpp.obj: app/CMakeFiles/Tetris.dir/includes_CXX.rsp
app/CMakeFiles/Tetris.dir/src/Object.cpp.obj: ../app/src/Object.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\curro.LAPTOP-DUBBS74R\OneDrive\Documentos\Programming\C++\Tetris\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object app/CMakeFiles/Tetris.dir/src/Object.cpp.obj"
	cd /d C:\Users\curro.LAPTOP-DUBBS74R\OneDrive\Documentos\Programming\C++\Tetris\build\app && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Tetris.dir\src\Object.cpp.obj -c C:\Users\curro.LAPTOP-DUBBS74R\OneDrive\Documentos\Programming\C++\Tetris\app\src\Object.cpp

app/CMakeFiles/Tetris.dir/src/Object.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Tetris.dir/src/Object.cpp.i"
	cd /d C:\Users\curro.LAPTOP-DUBBS74R\OneDrive\Documentos\Programming\C++\Tetris\build\app && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\curro.LAPTOP-DUBBS74R\OneDrive\Documentos\Programming\C++\Tetris\app\src\Object.cpp > CMakeFiles\Tetris.dir\src\Object.cpp.i

app/CMakeFiles/Tetris.dir/src/Object.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Tetris.dir/src/Object.cpp.s"
	cd /d C:\Users\curro.LAPTOP-DUBBS74R\OneDrive\Documentos\Programming\C++\Tetris\build\app && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\curro.LAPTOP-DUBBS74R\OneDrive\Documentos\Programming\C++\Tetris\app\src\Object.cpp -o CMakeFiles\Tetris.dir\src\Object.cpp.s

app/CMakeFiles/Tetris.dir/src/Tetris.cpp.obj: app/CMakeFiles/Tetris.dir/flags.make
app/CMakeFiles/Tetris.dir/src/Tetris.cpp.obj: app/CMakeFiles/Tetris.dir/includes_CXX.rsp
app/CMakeFiles/Tetris.dir/src/Tetris.cpp.obj: ../app/src/Tetris.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\curro.LAPTOP-DUBBS74R\OneDrive\Documentos\Programming\C++\Tetris\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object app/CMakeFiles/Tetris.dir/src/Tetris.cpp.obj"
	cd /d C:\Users\curro.LAPTOP-DUBBS74R\OneDrive\Documentos\Programming\C++\Tetris\build\app && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Tetris.dir\src\Tetris.cpp.obj -c C:\Users\curro.LAPTOP-DUBBS74R\OneDrive\Documentos\Programming\C++\Tetris\app\src\Tetris.cpp

app/CMakeFiles/Tetris.dir/src/Tetris.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Tetris.dir/src/Tetris.cpp.i"
	cd /d C:\Users\curro.LAPTOP-DUBBS74R\OneDrive\Documentos\Programming\C++\Tetris\build\app && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\curro.LAPTOP-DUBBS74R\OneDrive\Documentos\Programming\C++\Tetris\app\src\Tetris.cpp > CMakeFiles\Tetris.dir\src\Tetris.cpp.i

app/CMakeFiles/Tetris.dir/src/Tetris.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Tetris.dir/src/Tetris.cpp.s"
	cd /d C:\Users\curro.LAPTOP-DUBBS74R\OneDrive\Documentos\Programming\C++\Tetris\build\app && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\curro.LAPTOP-DUBBS74R\OneDrive\Documentos\Programming\C++\Tetris\app\src\Tetris.cpp -o CMakeFiles\Tetris.dir\src\Tetris.cpp.s

app/CMakeFiles/Tetris.dir/src/main.cpp.obj: app/CMakeFiles/Tetris.dir/flags.make
app/CMakeFiles/Tetris.dir/src/main.cpp.obj: app/CMakeFiles/Tetris.dir/includes_CXX.rsp
app/CMakeFiles/Tetris.dir/src/main.cpp.obj: ../app/src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\curro.LAPTOP-DUBBS74R\OneDrive\Documentos\Programming\C++\Tetris\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object app/CMakeFiles/Tetris.dir/src/main.cpp.obj"
	cd /d C:\Users\curro.LAPTOP-DUBBS74R\OneDrive\Documentos\Programming\C++\Tetris\build\app && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Tetris.dir\src\main.cpp.obj -c C:\Users\curro.LAPTOP-DUBBS74R\OneDrive\Documentos\Programming\C++\Tetris\app\src\main.cpp

app/CMakeFiles/Tetris.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Tetris.dir/src/main.cpp.i"
	cd /d C:\Users\curro.LAPTOP-DUBBS74R\OneDrive\Documentos\Programming\C++\Tetris\build\app && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\curro.LAPTOP-DUBBS74R\OneDrive\Documentos\Programming\C++\Tetris\app\src\main.cpp > CMakeFiles\Tetris.dir\src\main.cpp.i

app/CMakeFiles/Tetris.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Tetris.dir/src/main.cpp.s"
	cd /d C:\Users\curro.LAPTOP-DUBBS74R\OneDrive\Documentos\Programming\C++\Tetris\build\app && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\curro.LAPTOP-DUBBS74R\OneDrive\Documentos\Programming\C++\Tetris\app\src\main.cpp -o CMakeFiles\Tetris.dir\src\main.cpp.s

# Object files for target Tetris
Tetris_OBJECTS = \
"CMakeFiles/Tetris.dir/src/Manager.cpp.obj" \
"CMakeFiles/Tetris.dir/src/Rect.cpp.obj" \
"CMakeFiles/Tetris.dir/src/Object.cpp.obj" \
"CMakeFiles/Tetris.dir/src/Tetris.cpp.obj" \
"CMakeFiles/Tetris.dir/src/main.cpp.obj"

# External object files for target Tetris
Tetris_EXTERNAL_OBJECTS =

app/Tetris.exe: app/CMakeFiles/Tetris.dir/src/Manager.cpp.obj
app/Tetris.exe: app/CMakeFiles/Tetris.dir/src/Rect.cpp.obj
app/Tetris.exe: app/CMakeFiles/Tetris.dir/src/Object.cpp.obj
app/Tetris.exe: app/CMakeFiles/Tetris.dir/src/Tetris.cpp.obj
app/Tetris.exe: app/CMakeFiles/Tetris.dir/src/main.cpp.obj
app/Tetris.exe: app/CMakeFiles/Tetris.dir/build.make
app/Tetris.exe: SFML/lib/libsfml-graphics-s-d.a
app/Tetris.exe: SFML/lib/libsfml-window-s-d.a
app/Tetris.exe: SFML/lib/libsfml-system-s-d.a
app/Tetris.exe: ../SFML/extlibs/libs-mingw/x86/libfreetype.a
app/Tetris.exe: ../SFML/extlibs/libs-mingw/x86/libjpeg.a
app/Tetris.exe: app/CMakeFiles/Tetris.dir/linklibs.rsp
app/Tetris.exe: app/CMakeFiles/Tetris.dir/objects1.rsp
app/Tetris.exe: app/CMakeFiles/Tetris.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\curro.LAPTOP-DUBBS74R\OneDrive\Documentos\Programming\C++\Tetris\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable Tetris.exe"
	cd /d C:\Users\curro.LAPTOP-DUBBS74R\OneDrive\Documentos\Programming\C++\Tetris\build\app && "C:\Program Files\CMake\bin\cmake.exe" -E copy_directory C:/Users/curro.LAPTOP-DUBBS74R/OneDrive/Documentos/Programming/C++/Tetris/resources C:/Users/curro.LAPTOP-DUBBS74R/OneDrive/Documentos/Programming/C++/Tetris/build/app/resources
	cd /d C:\Users\curro.LAPTOP-DUBBS74R\OneDrive\Documentos\Programming\C++\Tetris\build\app && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Tetris.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
app/CMakeFiles/Tetris.dir/build: app/Tetris.exe

.PHONY : app/CMakeFiles/Tetris.dir/build

app/CMakeFiles/Tetris.dir/clean:
	cd /d C:\Users\curro.LAPTOP-DUBBS74R\OneDrive\Documentos\Programming\C++\Tetris\build\app && $(CMAKE_COMMAND) -P CMakeFiles\Tetris.dir\cmake_clean.cmake
.PHONY : app/CMakeFiles/Tetris.dir/clean

app/CMakeFiles/Tetris.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\curro.LAPTOP-DUBBS74R\OneDrive\Documentos\Programming\C++\Tetris C:\Users\curro.LAPTOP-DUBBS74R\OneDrive\Documentos\Programming\C++\Tetris\app C:\Users\curro.LAPTOP-DUBBS74R\OneDrive\Documentos\Programming\C++\Tetris\build C:\Users\curro.LAPTOP-DUBBS74R\OneDrive\Documentos\Programming\C++\Tetris\build\app C:\Users\curro.LAPTOP-DUBBS74R\OneDrive\Documentos\Programming\C++\Tetris\build\app\CMakeFiles\Tetris.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : app/CMakeFiles/Tetris.dir/depend

