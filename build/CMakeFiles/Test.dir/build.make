# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_SOURCE_DIR = /home/cheg/Repos/Master/Spike

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/cheg/Repos/Master/Spike/build

# Include any dependencies generated for this target.
include CMakeFiles/Test.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Test.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Test.dir/flags.make

CMakeFiles/Test.dir/test/testmain.cpp.o: CMakeFiles/Test.dir/flags.make
CMakeFiles/Test.dir/test/testmain.cpp.o: ../test/testmain.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cheg/Repos/Master/Spike/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Test.dir/test/testmain.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Test.dir/test/testmain.cpp.o -c /home/cheg/Repos/Master/Spike/test/testmain.cpp

CMakeFiles/Test.dir/test/testmain.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Test.dir/test/testmain.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cheg/Repos/Master/Spike/test/testmain.cpp > CMakeFiles/Test.dir/test/testmain.cpp.i

CMakeFiles/Test.dir/test/testmain.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Test.dir/test/testmain.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cheg/Repos/Master/Spike/test/testmain.cpp -o CMakeFiles/Test.dir/test/testmain.cpp.s

CMakeFiles/Test.dir/test/tests.cpp.o: CMakeFiles/Test.dir/flags.make
CMakeFiles/Test.dir/test/tests.cpp.o: ../test/tests.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cheg/Repos/Master/Spike/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Test.dir/test/tests.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Test.dir/test/tests.cpp.o -c /home/cheg/Repos/Master/Spike/test/tests.cpp

CMakeFiles/Test.dir/test/tests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Test.dir/test/tests.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cheg/Repos/Master/Spike/test/tests.cpp > CMakeFiles/Test.dir/test/tests.cpp.i

CMakeFiles/Test.dir/test/tests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Test.dir/test/tests.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cheg/Repos/Master/Spike/test/tests.cpp -o CMakeFiles/Test.dir/test/tests.cpp.s

CMakeFiles/Test.dir/src/factorial.cpp.o: CMakeFiles/Test.dir/flags.make
CMakeFiles/Test.dir/src/factorial.cpp.o: ../src/factorial.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cheg/Repos/Master/Spike/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Test.dir/src/factorial.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Test.dir/src/factorial.cpp.o -c /home/cheg/Repos/Master/Spike/src/factorial.cpp

CMakeFiles/Test.dir/src/factorial.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Test.dir/src/factorial.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cheg/Repos/Master/Spike/src/factorial.cpp > CMakeFiles/Test.dir/src/factorial.cpp.i

CMakeFiles/Test.dir/src/factorial.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Test.dir/src/factorial.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cheg/Repos/Master/Spike/src/factorial.cpp -o CMakeFiles/Test.dir/src/factorial.cpp.s

# Object files for target Test
Test_OBJECTS = \
"CMakeFiles/Test.dir/test/testmain.cpp.o" \
"CMakeFiles/Test.dir/test/tests.cpp.o" \
"CMakeFiles/Test.dir/src/factorial.cpp.o"

# External object files for target Test
Test_EXTERNAL_OBJECTS =

Test: CMakeFiles/Test.dir/test/testmain.cpp.o
Test: CMakeFiles/Test.dir/test/tests.cpp.o
Test: CMakeFiles/Test.dir/src/factorial.cpp.o
Test: CMakeFiles/Test.dir/build.make
Test: CMakeFiles/Test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/cheg/Repos/Master/Spike/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable Test"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Test.dir/build: Test

.PHONY : CMakeFiles/Test.dir/build

CMakeFiles/Test.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Test.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Test.dir/clean

CMakeFiles/Test.dir/depend:
	cd /home/cheg/Repos/Master/Spike/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cheg/Repos/Master/Spike /home/cheg/Repos/Master/Spike /home/cheg/Repos/Master/Spike/build /home/cheg/Repos/Master/Spike/build /home/cheg/Repos/Master/Spike/build/CMakeFiles/Test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Test.dir/depend

