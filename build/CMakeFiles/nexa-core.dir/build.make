# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /root/Nexa-Core

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /root/Nexa-Core/build

# Include any dependencies generated for this target.
include CMakeFiles/nexa-core.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/nexa-core.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/nexa-core.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/nexa-core.dir/flags.make

CMakeFiles/nexa-core.dir/src/main.cpp.o: CMakeFiles/nexa-core.dir/flags.make
CMakeFiles/nexa-core.dir/src/main.cpp.o: /root/Nexa-Core/src/main.cpp
CMakeFiles/nexa-core.dir/src/main.cpp.o: CMakeFiles/nexa-core.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/Nexa-Core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/nexa-core.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/nexa-core.dir/src/main.cpp.o -MF CMakeFiles/nexa-core.dir/src/main.cpp.o.d -o CMakeFiles/nexa-core.dir/src/main.cpp.o -c /root/Nexa-Core/src/main.cpp

CMakeFiles/nexa-core.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/nexa-core.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/Nexa-Core/src/main.cpp > CMakeFiles/nexa-core.dir/src/main.cpp.i

CMakeFiles/nexa-core.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/nexa-core.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/Nexa-Core/src/main.cpp -o CMakeFiles/nexa-core.dir/src/main.cpp.s

CMakeFiles/nexa-core.dir/src/blockchain/blockchain.cpp.o: CMakeFiles/nexa-core.dir/flags.make
CMakeFiles/nexa-core.dir/src/blockchain/blockchain.cpp.o: /root/Nexa-Core/src/blockchain/blockchain.cpp
CMakeFiles/nexa-core.dir/src/blockchain/blockchain.cpp.o: CMakeFiles/nexa-core.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/Nexa-Core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/nexa-core.dir/src/blockchain/blockchain.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/nexa-core.dir/src/blockchain/blockchain.cpp.o -MF CMakeFiles/nexa-core.dir/src/blockchain/blockchain.cpp.o.d -o CMakeFiles/nexa-core.dir/src/blockchain/blockchain.cpp.o -c /root/Nexa-Core/src/blockchain/blockchain.cpp

CMakeFiles/nexa-core.dir/src/blockchain/blockchain.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/nexa-core.dir/src/blockchain/blockchain.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/Nexa-Core/src/blockchain/blockchain.cpp > CMakeFiles/nexa-core.dir/src/blockchain/blockchain.cpp.i

CMakeFiles/nexa-core.dir/src/blockchain/blockchain.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/nexa-core.dir/src/blockchain/blockchain.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/Nexa-Core/src/blockchain/blockchain.cpp -o CMakeFiles/nexa-core.dir/src/blockchain/blockchain.cpp.s

CMakeFiles/nexa-core.dir/src/blockchain/block.cpp.o: CMakeFiles/nexa-core.dir/flags.make
CMakeFiles/nexa-core.dir/src/blockchain/block.cpp.o: /root/Nexa-Core/src/blockchain/block.cpp
CMakeFiles/nexa-core.dir/src/blockchain/block.cpp.o: CMakeFiles/nexa-core.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/Nexa-Core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/nexa-core.dir/src/blockchain/block.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/nexa-core.dir/src/blockchain/block.cpp.o -MF CMakeFiles/nexa-core.dir/src/blockchain/block.cpp.o.d -o CMakeFiles/nexa-core.dir/src/blockchain/block.cpp.o -c /root/Nexa-Core/src/blockchain/block.cpp

CMakeFiles/nexa-core.dir/src/blockchain/block.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/nexa-core.dir/src/blockchain/block.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/Nexa-Core/src/blockchain/block.cpp > CMakeFiles/nexa-core.dir/src/blockchain/block.cpp.i

CMakeFiles/nexa-core.dir/src/blockchain/block.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/nexa-core.dir/src/blockchain/block.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/Nexa-Core/src/blockchain/block.cpp -o CMakeFiles/nexa-core.dir/src/blockchain/block.cpp.s

# Object files for target nexa-core
nexa__core_OBJECTS = \
"CMakeFiles/nexa-core.dir/src/main.cpp.o" \
"CMakeFiles/nexa-core.dir/src/blockchain/blockchain.cpp.o" \
"CMakeFiles/nexa-core.dir/src/blockchain/block.cpp.o"

# External object files for target nexa-core
nexa__core_EXTERNAL_OBJECTS =

nexa-core: CMakeFiles/nexa-core.dir/src/main.cpp.o
nexa-core: CMakeFiles/nexa-core.dir/src/blockchain/blockchain.cpp.o
nexa-core: CMakeFiles/nexa-core.dir/src/blockchain/block.cpp.o
nexa-core: CMakeFiles/nexa-core.dir/build.make
nexa-core: CMakeFiles/nexa-core.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/root/Nexa-Core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable nexa-core"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/nexa-core.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/nexa-core.dir/build: nexa-core
.PHONY : CMakeFiles/nexa-core.dir/build

CMakeFiles/nexa-core.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/nexa-core.dir/cmake_clean.cmake
.PHONY : CMakeFiles/nexa-core.dir/clean

CMakeFiles/nexa-core.dir/depend:
	cd /root/Nexa-Core/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/Nexa-Core /root/Nexa-Core /root/Nexa-Core/build /root/Nexa-Core/build /root/Nexa-Core/build/CMakeFiles/nexa-core.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/nexa-core.dir/depend

