# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = /home/rc/Documents/clion-2018.2.6/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/rc/Documents/clion-2018.2.6/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/rc/GitRepository/DataStructure/DoubleLinkList

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/rc/GitRepository/DataStructure/DoubleLinkList/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/DoubleLinkList.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/DoubleLinkList.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/DoubleLinkList.dir/flags.make

CMakeFiles/DoubleLinkList.dir/main.cpp.o: CMakeFiles/DoubleLinkList.dir/flags.make
CMakeFiles/DoubleLinkList.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rc/GitRepository/DataStructure/DoubleLinkList/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/DoubleLinkList.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/DoubleLinkList.dir/main.cpp.o -c /home/rc/GitRepository/DataStructure/DoubleLinkList/main.cpp

CMakeFiles/DoubleLinkList.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DoubleLinkList.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rc/GitRepository/DataStructure/DoubleLinkList/main.cpp > CMakeFiles/DoubleLinkList.dir/main.cpp.i

CMakeFiles/DoubleLinkList.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DoubleLinkList.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rc/GitRepository/DataStructure/DoubleLinkList/main.cpp -o CMakeFiles/DoubleLinkList.dir/main.cpp.s

# Object files for target DoubleLinkList
DoubleLinkList_OBJECTS = \
"CMakeFiles/DoubleLinkList.dir/main.cpp.o"

# External object files for target DoubleLinkList
DoubleLinkList_EXTERNAL_OBJECTS =

DoubleLinkList: CMakeFiles/DoubleLinkList.dir/main.cpp.o
DoubleLinkList: CMakeFiles/DoubleLinkList.dir/build.make
DoubleLinkList: CMakeFiles/DoubleLinkList.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/rc/GitRepository/DataStructure/DoubleLinkList/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable DoubleLinkList"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/DoubleLinkList.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/DoubleLinkList.dir/build: DoubleLinkList

.PHONY : CMakeFiles/DoubleLinkList.dir/build

CMakeFiles/DoubleLinkList.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/DoubleLinkList.dir/cmake_clean.cmake
.PHONY : CMakeFiles/DoubleLinkList.dir/clean

CMakeFiles/DoubleLinkList.dir/depend:
	cd /home/rc/GitRepository/DataStructure/DoubleLinkList/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rc/GitRepository/DataStructure/DoubleLinkList /home/rc/GitRepository/DataStructure/DoubleLinkList /home/rc/GitRepository/DataStructure/DoubleLinkList/cmake-build-debug /home/rc/GitRepository/DataStructure/DoubleLinkList/cmake-build-debug /home/rc/GitRepository/DataStructure/DoubleLinkList/cmake-build-debug/CMakeFiles/DoubleLinkList.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/DoubleLinkList.dir/depend

