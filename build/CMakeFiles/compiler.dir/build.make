# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.30

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
CMAKE_SOURCE_DIR = /home/admiralcapo/personal/C-JIT

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/admiralcapo/personal/C-JIT/build

# Include any dependencies generated for this target.
include CMakeFiles/compiler.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/compiler.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/compiler.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/compiler.dir/flags.make

CMakeFiles/compiler.dir/main.cpp.o: CMakeFiles/compiler.dir/flags.make
CMakeFiles/compiler.dir/main.cpp.o: /home/admiralcapo/personal/C-JIT/main.cpp
CMakeFiles/compiler.dir/main.cpp.o: CMakeFiles/compiler.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/admiralcapo/personal/C-JIT/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/compiler.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/compiler.dir/main.cpp.o -MF CMakeFiles/compiler.dir/main.cpp.o.d -o CMakeFiles/compiler.dir/main.cpp.o -c /home/admiralcapo/personal/C-JIT/main.cpp

CMakeFiles/compiler.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/compiler.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/admiralcapo/personal/C-JIT/main.cpp > CMakeFiles/compiler.dir/main.cpp.i

CMakeFiles/compiler.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/compiler.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/admiralcapo/personal/C-JIT/main.cpp -o CMakeFiles/compiler.dir/main.cpp.s

CMakeFiles/compiler.dir/src/Lexer/Lexer.cpp.o: CMakeFiles/compiler.dir/flags.make
CMakeFiles/compiler.dir/src/Lexer/Lexer.cpp.o: /home/admiralcapo/personal/C-JIT/src/Lexer/Lexer.cpp
CMakeFiles/compiler.dir/src/Lexer/Lexer.cpp.o: CMakeFiles/compiler.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/admiralcapo/personal/C-JIT/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/compiler.dir/src/Lexer/Lexer.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/compiler.dir/src/Lexer/Lexer.cpp.o -MF CMakeFiles/compiler.dir/src/Lexer/Lexer.cpp.o.d -o CMakeFiles/compiler.dir/src/Lexer/Lexer.cpp.o -c /home/admiralcapo/personal/C-JIT/src/Lexer/Lexer.cpp

CMakeFiles/compiler.dir/src/Lexer/Lexer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/compiler.dir/src/Lexer/Lexer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/admiralcapo/personal/C-JIT/src/Lexer/Lexer.cpp > CMakeFiles/compiler.dir/src/Lexer/Lexer.cpp.i

CMakeFiles/compiler.dir/src/Lexer/Lexer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/compiler.dir/src/Lexer/Lexer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/admiralcapo/personal/C-JIT/src/Lexer/Lexer.cpp -o CMakeFiles/compiler.dir/src/Lexer/Lexer.cpp.s

CMakeFiles/compiler.dir/src/Lexer/Token.cpp.o: CMakeFiles/compiler.dir/flags.make
CMakeFiles/compiler.dir/src/Lexer/Token.cpp.o: /home/admiralcapo/personal/C-JIT/src/Lexer/Token.cpp
CMakeFiles/compiler.dir/src/Lexer/Token.cpp.o: CMakeFiles/compiler.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/admiralcapo/personal/C-JIT/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/compiler.dir/src/Lexer/Token.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/compiler.dir/src/Lexer/Token.cpp.o -MF CMakeFiles/compiler.dir/src/Lexer/Token.cpp.o.d -o CMakeFiles/compiler.dir/src/Lexer/Token.cpp.o -c /home/admiralcapo/personal/C-JIT/src/Lexer/Token.cpp

CMakeFiles/compiler.dir/src/Lexer/Token.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/compiler.dir/src/Lexer/Token.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/admiralcapo/personal/C-JIT/src/Lexer/Token.cpp > CMakeFiles/compiler.dir/src/Lexer/Token.cpp.i

CMakeFiles/compiler.dir/src/Lexer/Token.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/compiler.dir/src/Lexer/Token.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/admiralcapo/personal/C-JIT/src/Lexer/Token.cpp -o CMakeFiles/compiler.dir/src/Lexer/Token.cpp.s

# Object files for target compiler
compiler_OBJECTS = \
"CMakeFiles/compiler.dir/main.cpp.o" \
"CMakeFiles/compiler.dir/src/Lexer/Lexer.cpp.o" \
"CMakeFiles/compiler.dir/src/Lexer/Token.cpp.o"

# External object files for target compiler
compiler_EXTERNAL_OBJECTS =

compiler: CMakeFiles/compiler.dir/main.cpp.o
compiler: CMakeFiles/compiler.dir/src/Lexer/Lexer.cpp.o
compiler: CMakeFiles/compiler.dir/src/Lexer/Token.cpp.o
compiler: CMakeFiles/compiler.dir/build.make
compiler: CMakeFiles/compiler.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/admiralcapo/personal/C-JIT/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable compiler"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/compiler.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/compiler.dir/build: compiler
.PHONY : CMakeFiles/compiler.dir/build

CMakeFiles/compiler.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/compiler.dir/cmake_clean.cmake
.PHONY : CMakeFiles/compiler.dir/clean

CMakeFiles/compiler.dir/depend:
	cd /home/admiralcapo/personal/C-JIT/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/admiralcapo/personal/C-JIT /home/admiralcapo/personal/C-JIT /home/admiralcapo/personal/C-JIT/build /home/admiralcapo/personal/C-JIT/build /home/admiralcapo/personal/C-JIT/build/CMakeFiles/compiler.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/compiler.dir/depend

