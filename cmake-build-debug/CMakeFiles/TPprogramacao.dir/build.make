# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.2.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.2.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\cassi\CLionProjects\TPprogramacao

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\cassi\CLionProjects\TPprogramacao\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/TPprogramacao.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/TPprogramacao.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TPprogramacao.dir/flags.make

CMakeFiles/TPprogramacao.dir/main.c.obj: CMakeFiles/TPprogramacao.dir/flags.make
CMakeFiles/TPprogramacao.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\cassi\CLionProjects\TPprogramacao\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/TPprogramacao.dir/main.c.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\TPprogramacao.dir\main.c.obj   -c C:\Users\cassi\CLionProjects\TPprogramacao\main.c

CMakeFiles/TPprogramacao.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/TPprogramacao.dir/main.c.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\cassi\CLionProjects\TPprogramacao\main.c > CMakeFiles\TPprogramacao.dir\main.c.i

CMakeFiles/TPprogramacao.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/TPprogramacao.dir/main.c.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\cassi\CLionProjects\TPprogramacao\main.c -o CMakeFiles\TPprogramacao.dir\main.c.s

# Object files for target TPprogramacao
TPprogramacao_OBJECTS = \
"CMakeFiles/TPprogramacao.dir/main.c.obj"

# External object files for target TPprogramacao
TPprogramacao_EXTERNAL_OBJECTS =

TPprogramacao.exe: CMakeFiles/TPprogramacao.dir/main.c.obj
TPprogramacao.exe: CMakeFiles/TPprogramacao.dir/build.make
TPprogramacao.exe: CMakeFiles/TPprogramacao.dir/linklibs.rsp
TPprogramacao.exe: CMakeFiles/TPprogramacao.dir/objects1.rsp
TPprogramacao.exe: CMakeFiles/TPprogramacao.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\cassi\CLionProjects\TPprogramacao\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable TPprogramacao.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\TPprogramacao.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TPprogramacao.dir/build: TPprogramacao.exe

.PHONY : CMakeFiles/TPprogramacao.dir/build

CMakeFiles/TPprogramacao.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\TPprogramacao.dir\cmake_clean.cmake
.PHONY : CMakeFiles/TPprogramacao.dir/clean

CMakeFiles/TPprogramacao.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\cassi\CLionProjects\TPprogramacao C:\Users\cassi\CLionProjects\TPprogramacao C:\Users\cassi\CLionProjects\TPprogramacao\cmake-build-debug C:\Users\cassi\CLionProjects\TPprogramacao\cmake-build-debug C:\Users\cassi\CLionProjects\TPprogramacao\cmake-build-debug\CMakeFiles\TPprogramacao.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/TPprogramacao.dir/depend

