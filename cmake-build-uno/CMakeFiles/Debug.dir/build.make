# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Users\Dave\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\203.7148.70\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\Dave\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\203.7148.70\bin\cmake\win\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Dave\CLionProjects\filling-machine

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Dave\CLionProjects\filling-machine\cmake-build-uno

# Utility rule file for Debug.

# Include the progress variables for this target.
include CMakeFiles/Debug.dir/progress.make

CMakeFiles/Debug:
	cd /d C:\Users\Dave\CLionProjects\filling-machine && platformio -c clion run --target debug -euno

Debug: CMakeFiles/Debug
Debug: CMakeFiles/Debug.dir/build.make

.PHONY : Debug

# Rule to build all files generated by this target.
CMakeFiles/Debug.dir/build: Debug

.PHONY : CMakeFiles/Debug.dir/build

CMakeFiles/Debug.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Debug.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Debug.dir/clean

CMakeFiles/Debug.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Dave\CLionProjects\filling-machine C:\Users\Dave\CLionProjects\filling-machine C:\Users\Dave\CLionProjects\filling-machine\cmake-build-uno C:\Users\Dave\CLionProjects\filling-machine\cmake-build-uno C:\Users\Dave\CLionProjects\filling-machine\cmake-build-uno\CMakeFiles\Debug.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Debug.dir/depend

