# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 4.0

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

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

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = D:\CMake\bin\cmake.exe

# The command to remove a file.
RM = D:\CMake\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\stego_project

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\stego_project\build

# Utility rule file for stego_autogen.

# Include any custom commands dependencies for this target.
include CMakeFiles\stego_autogen.dir\compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles\stego_autogen.dir\progress.make

CMakeFiles\stego_autogen: stego_autogen\timestamp

stego_autogen\timestamp: D:\Qt\6.6.1\msvc2019_64\.\bin\moc.exe
stego_autogen\timestamp: D:\Qt\6.6.1\msvc2019_64\.\bin\uic.exe
stego_autogen\timestamp: CMakeFiles\stego_autogen.dir\compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=D:\stego_project\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target stego"
	D:\CMake\bin\cmake.exe -E cmake_autogen D:/stego_project/build/CMakeFiles/stego_autogen.dir/AutogenInfo.json Debug
	D:\CMake\bin\cmake.exe -E touch D:/stego_project/build/stego_autogen/timestamp

CMakeFiles\stego_autogen.dir\codegen:
.PHONY : CMakeFiles\stego_autogen.dir\codegen

stego_autogen: CMakeFiles\stego_autogen
stego_autogen: stego_autogen\timestamp
stego_autogen: CMakeFiles\stego_autogen.dir\build.make
.PHONY : stego_autogen

# Rule to build all files generated by this target.
CMakeFiles\stego_autogen.dir\build: stego_autogen
.PHONY : CMakeFiles\stego_autogen.dir\build

CMakeFiles\stego_autogen.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\stego_autogen.dir\cmake_clean.cmake
.PHONY : CMakeFiles\stego_autogen.dir\clean

CMakeFiles\stego_autogen.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" D:\stego_project D:\stego_project D:\stego_project\build D:\stego_project\build D:\stego_project\build\CMakeFiles\stego_autogen.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles\stego_autogen.dir\depend

