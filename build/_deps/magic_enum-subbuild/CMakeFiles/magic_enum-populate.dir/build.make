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
CMAKE_SOURCE_DIR = /home/admiralcapo/personal/C-JIT/build/_deps/magic_enum-subbuild

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/admiralcapo/personal/C-JIT/build/_deps/magic_enum-subbuild

# Utility rule file for magic_enum-populate.

# Include any custom commands dependencies for this target.
include CMakeFiles/magic_enum-populate.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/magic_enum-populate.dir/progress.make

CMakeFiles/magic_enum-populate: CMakeFiles/magic_enum-populate-complete

CMakeFiles/magic_enum-populate-complete: magic_enum-populate-prefix/src/magic_enum-populate-stamp/magic_enum-populate-install
CMakeFiles/magic_enum-populate-complete: magic_enum-populate-prefix/src/magic_enum-populate-stamp/magic_enum-populate-mkdir
CMakeFiles/magic_enum-populate-complete: magic_enum-populate-prefix/src/magic_enum-populate-stamp/magic_enum-populate-download
CMakeFiles/magic_enum-populate-complete: magic_enum-populate-prefix/src/magic_enum-populate-stamp/magic_enum-populate-update
CMakeFiles/magic_enum-populate-complete: magic_enum-populate-prefix/src/magic_enum-populate-stamp/magic_enum-populate-patch
CMakeFiles/magic_enum-populate-complete: magic_enum-populate-prefix/src/magic_enum-populate-stamp/magic_enum-populate-configure
CMakeFiles/magic_enum-populate-complete: magic_enum-populate-prefix/src/magic_enum-populate-stamp/magic_enum-populate-build
CMakeFiles/magic_enum-populate-complete: magic_enum-populate-prefix/src/magic_enum-populate-stamp/magic_enum-populate-install
CMakeFiles/magic_enum-populate-complete: magic_enum-populate-prefix/src/magic_enum-populate-stamp/magic_enum-populate-test
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/admiralcapo/personal/C-JIT/build/_deps/magic_enum-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Completed 'magic_enum-populate'"
	/usr/bin/cmake -E make_directory /home/admiralcapo/personal/C-JIT/build/_deps/magic_enum-subbuild/CMakeFiles
	/usr/bin/cmake -E touch /home/admiralcapo/personal/C-JIT/build/_deps/magic_enum-subbuild/CMakeFiles/magic_enum-populate-complete
	/usr/bin/cmake -E touch /home/admiralcapo/personal/C-JIT/build/_deps/magic_enum-subbuild/magic_enum-populate-prefix/src/magic_enum-populate-stamp/magic_enum-populate-done

magic_enum-populate-prefix/src/magic_enum-populate-stamp/magic_enum-populate-update:
.PHONY : magic_enum-populate-prefix/src/magic_enum-populate-stamp/magic_enum-populate-update

magic_enum-populate-prefix/src/magic_enum-populate-stamp/magic_enum-populate-build: magic_enum-populate-prefix/src/magic_enum-populate-stamp/magic_enum-populate-configure
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/admiralcapo/personal/C-JIT/build/_deps/magic_enum-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "No build step for 'magic_enum-populate'"
	cd /home/admiralcapo/personal/C-JIT/build/_deps/magic_enum-build && /usr/bin/cmake -E echo_append
	cd /home/admiralcapo/personal/C-JIT/build/_deps/magic_enum-build && /usr/bin/cmake -E touch /home/admiralcapo/personal/C-JIT/build/_deps/magic_enum-subbuild/magic_enum-populate-prefix/src/magic_enum-populate-stamp/magic_enum-populate-build

magic_enum-populate-prefix/src/magic_enum-populate-stamp/magic_enum-populate-configure: magic_enum-populate-prefix/tmp/magic_enum-populate-cfgcmd.txt
magic_enum-populate-prefix/src/magic_enum-populate-stamp/magic_enum-populate-configure: magic_enum-populate-prefix/src/magic_enum-populate-stamp/magic_enum-populate-patch
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/admiralcapo/personal/C-JIT/build/_deps/magic_enum-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "No configure step for 'magic_enum-populate'"
	cd /home/admiralcapo/personal/C-JIT/build/_deps/magic_enum-build && /usr/bin/cmake -E echo_append
	cd /home/admiralcapo/personal/C-JIT/build/_deps/magic_enum-build && /usr/bin/cmake -E touch /home/admiralcapo/personal/C-JIT/build/_deps/magic_enum-subbuild/magic_enum-populate-prefix/src/magic_enum-populate-stamp/magic_enum-populate-configure

magic_enum-populate-prefix/src/magic_enum-populate-stamp/magic_enum-populate-download: magic_enum-populate-prefix/src/magic_enum-populate-stamp/magic_enum-populate-gitinfo.txt
magic_enum-populate-prefix/src/magic_enum-populate-stamp/magic_enum-populate-download: magic_enum-populate-prefix/src/magic_enum-populate-stamp/magic_enum-populate-mkdir
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/admiralcapo/personal/C-JIT/build/_deps/magic_enum-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Performing download step (git clone) for 'magic_enum-populate'"
	cd /home/admiralcapo/personal/C-JIT/build/_deps && /usr/bin/cmake -DCMAKE_MESSAGE_LOG_LEVEL=VERBOSE -P /home/admiralcapo/personal/C-JIT/build/_deps/magic_enum-subbuild/magic_enum-populate-prefix/tmp/magic_enum-populate-gitclone.cmake
	cd /home/admiralcapo/personal/C-JIT/build/_deps && /usr/bin/cmake -E touch /home/admiralcapo/personal/C-JIT/build/_deps/magic_enum-subbuild/magic_enum-populate-prefix/src/magic_enum-populate-stamp/magic_enum-populate-download

magic_enum-populate-prefix/src/magic_enum-populate-stamp/magic_enum-populate-install: magic_enum-populate-prefix/src/magic_enum-populate-stamp/magic_enum-populate-build
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/admiralcapo/personal/C-JIT/build/_deps/magic_enum-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "No install step for 'magic_enum-populate'"
	cd /home/admiralcapo/personal/C-JIT/build/_deps/magic_enum-build && /usr/bin/cmake -E echo_append
	cd /home/admiralcapo/personal/C-JIT/build/_deps/magic_enum-build && /usr/bin/cmake -E touch /home/admiralcapo/personal/C-JIT/build/_deps/magic_enum-subbuild/magic_enum-populate-prefix/src/magic_enum-populate-stamp/magic_enum-populate-install

magic_enum-populate-prefix/src/magic_enum-populate-stamp/magic_enum-populate-mkdir:
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/admiralcapo/personal/C-JIT/build/_deps/magic_enum-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Creating directories for 'magic_enum-populate'"
	/usr/bin/cmake -Dcfgdir= -P /home/admiralcapo/personal/C-JIT/build/_deps/magic_enum-subbuild/magic_enum-populate-prefix/tmp/magic_enum-populate-mkdirs.cmake
	/usr/bin/cmake -E touch /home/admiralcapo/personal/C-JIT/build/_deps/magic_enum-subbuild/magic_enum-populate-prefix/src/magic_enum-populate-stamp/magic_enum-populate-mkdir

magic_enum-populate-prefix/src/magic_enum-populate-stamp/magic_enum-populate-patch: magic_enum-populate-prefix/src/magic_enum-populate-stamp/magic_enum-populate-patch-info.txt
magic_enum-populate-prefix/src/magic_enum-populate-stamp/magic_enum-populate-patch: magic_enum-populate-prefix/src/magic_enum-populate-stamp/magic_enum-populate-update
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/admiralcapo/personal/C-JIT/build/_deps/magic_enum-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "No patch step for 'magic_enum-populate'"
	/usr/bin/cmake -E echo_append
	/usr/bin/cmake -E touch /home/admiralcapo/personal/C-JIT/build/_deps/magic_enum-subbuild/magic_enum-populate-prefix/src/magic_enum-populate-stamp/magic_enum-populate-patch

magic_enum-populate-prefix/src/magic_enum-populate-stamp/magic_enum-populate-update:
.PHONY : magic_enum-populate-prefix/src/magic_enum-populate-stamp/magic_enum-populate-update

magic_enum-populate-prefix/src/magic_enum-populate-stamp/magic_enum-populate-test: magic_enum-populate-prefix/src/magic_enum-populate-stamp/magic_enum-populate-install
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/admiralcapo/personal/C-JIT/build/_deps/magic_enum-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "No test step for 'magic_enum-populate'"
	cd /home/admiralcapo/personal/C-JIT/build/_deps/magic_enum-build && /usr/bin/cmake -E echo_append
	cd /home/admiralcapo/personal/C-JIT/build/_deps/magic_enum-build && /usr/bin/cmake -E touch /home/admiralcapo/personal/C-JIT/build/_deps/magic_enum-subbuild/magic_enum-populate-prefix/src/magic_enum-populate-stamp/magic_enum-populate-test

magic_enum-populate-prefix/src/magic_enum-populate-stamp/magic_enum-populate-update: magic_enum-populate-prefix/tmp/magic_enum-populate-gitupdate.cmake
magic_enum-populate-prefix/src/magic_enum-populate-stamp/magic_enum-populate-update: magic_enum-populate-prefix/src/magic_enum-populate-stamp/magic_enum-populate-update-info.txt
magic_enum-populate-prefix/src/magic_enum-populate-stamp/magic_enum-populate-update: magic_enum-populate-prefix/src/magic_enum-populate-stamp/magic_enum-populate-download
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/admiralcapo/personal/C-JIT/build/_deps/magic_enum-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Performing update step for 'magic_enum-populate'"
	cd /home/admiralcapo/personal/C-JIT/build/_deps/magic_enum-src && /usr/bin/cmake -Dcan_fetch=YES -DCMAKE_MESSAGE_LOG_LEVEL=VERBOSE -P /home/admiralcapo/personal/C-JIT/build/_deps/magic_enum-subbuild/magic_enum-populate-prefix/tmp/magic_enum-populate-gitupdate.cmake

magic_enum-populate: CMakeFiles/magic_enum-populate
magic_enum-populate: CMakeFiles/magic_enum-populate-complete
magic_enum-populate: magic_enum-populate-prefix/src/magic_enum-populate-stamp/magic_enum-populate-build
magic_enum-populate: magic_enum-populate-prefix/src/magic_enum-populate-stamp/magic_enum-populate-configure
magic_enum-populate: magic_enum-populate-prefix/src/magic_enum-populate-stamp/magic_enum-populate-download
magic_enum-populate: magic_enum-populate-prefix/src/magic_enum-populate-stamp/magic_enum-populate-install
magic_enum-populate: magic_enum-populate-prefix/src/magic_enum-populate-stamp/magic_enum-populate-mkdir
magic_enum-populate: magic_enum-populate-prefix/src/magic_enum-populate-stamp/magic_enum-populate-patch
magic_enum-populate: magic_enum-populate-prefix/src/magic_enum-populate-stamp/magic_enum-populate-test
magic_enum-populate: magic_enum-populate-prefix/src/magic_enum-populate-stamp/magic_enum-populate-update
magic_enum-populate: CMakeFiles/magic_enum-populate.dir/build.make
.PHONY : magic_enum-populate

# Rule to build all files generated by this target.
CMakeFiles/magic_enum-populate.dir/build: magic_enum-populate
.PHONY : CMakeFiles/magic_enum-populate.dir/build

CMakeFiles/magic_enum-populate.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/magic_enum-populate.dir/cmake_clean.cmake
.PHONY : CMakeFiles/magic_enum-populate.dir/clean

CMakeFiles/magic_enum-populate.dir/depend:
	cd /home/admiralcapo/personal/C-JIT/build/_deps/magic_enum-subbuild && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/admiralcapo/personal/C-JIT/build/_deps/magic_enum-subbuild /home/admiralcapo/personal/C-JIT/build/_deps/magic_enum-subbuild /home/admiralcapo/personal/C-JIT/build/_deps/magic_enum-subbuild /home/admiralcapo/personal/C-JIT/build/_deps/magic_enum-subbuild /home/admiralcapo/personal/C-JIT/build/_deps/magic_enum-subbuild/CMakeFiles/magic_enum-populate.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/magic_enum-populate.dir/depend
