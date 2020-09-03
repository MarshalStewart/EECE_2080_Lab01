# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


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
CMAKE_SOURCE_DIR = /home/mstewart/EECE_2080/Lab01

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mstewart/EECE_2080/Lab01

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "No interactive CMake dialog available..."
	/usr/bin/cmake -E echo No\ interactive\ CMake\ dialog\ available.
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/mstewart/EECE_2080/Lab01/CMakeFiles /home/mstewart/EECE_2080/Lab01/CMakeFiles/progress.marks
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/mstewart/EECE_2080/Lab01/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named runMain

# Build rule for target.
runMain: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 runMain
.PHONY : runMain

# fast build rule for target.
runMain/fast:
	$(MAKE) -f CMakeFiles/runMain.dir/build.make CMakeFiles/runMain.dir/build
.PHONY : runMain/fast

#=============================================================================
# Target rules for targets named runTests

# Build rule for target.
runTests: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 runTests
.PHONY : runTests

# fast build rule for target.
runTests/fast:
	$(MAKE) -f CMakeFiles/runTests.dir/build.make CMakeFiles/runTests.dir/build
.PHONY : runTests/fast

#=============================================================================
# Target rules for targets named applibrary

# Build rule for target.
applibrary: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 applibrary
.PHONY : applibrary

# fast build rule for target.
applibrary/fast:
	$(MAKE) -f CMakeFiles/applibrary.dir/build.make CMakeFiles/applibrary.dir/build
.PHONY : applibrary/fast

LinkedList.o: LinkedList.cpp.o

.PHONY : LinkedList.o

# target to build an object file
LinkedList.cpp.o:
	$(MAKE) -f CMakeFiles/applibrary.dir/build.make CMakeFiles/applibrary.dir/LinkedList.cpp.o
.PHONY : LinkedList.cpp.o

LinkedList.i: LinkedList.cpp.i

.PHONY : LinkedList.i

# target to preprocess a source file
LinkedList.cpp.i:
	$(MAKE) -f CMakeFiles/applibrary.dir/build.make CMakeFiles/applibrary.dir/LinkedList.cpp.i
.PHONY : LinkedList.cpp.i

LinkedList.s: LinkedList.cpp.s

.PHONY : LinkedList.s

# target to generate assembly for a file
LinkedList.cpp.s:
	$(MAKE) -f CMakeFiles/applibrary.dir/build.make CMakeFiles/applibrary.dir/LinkedList.cpp.s
.PHONY : LinkedList.cpp.s

main.o: main.cpp.o

.PHONY : main.o

# target to build an object file
main.cpp.o:
	$(MAKE) -f CMakeFiles/runMain.dir/build.make CMakeFiles/runMain.dir/main.cpp.o
.PHONY : main.cpp.o

main.i: main.cpp.i

.PHONY : main.i

# target to preprocess a source file
main.cpp.i:
	$(MAKE) -f CMakeFiles/runMain.dir/build.make CMakeFiles/runMain.dir/main.cpp.i
.PHONY : main.cpp.i

main.s: main.cpp.s

.PHONY : main.s

# target to generate assembly for a file
main.cpp.s:
	$(MAKE) -f CMakeFiles/runMain.dir/build.make CMakeFiles/runMain.dir/main.cpp.s
.PHONY : main.cpp.s

tests.o: tests.cpp.o

.PHONY : tests.o

# target to build an object file
tests.cpp.o:
	$(MAKE) -f CMakeFiles/runTests.dir/build.make CMakeFiles/runTests.dir/tests.cpp.o
.PHONY : tests.cpp.o

tests.i: tests.cpp.i

.PHONY : tests.i

# target to preprocess a source file
tests.cpp.i:
	$(MAKE) -f CMakeFiles/runTests.dir/build.make CMakeFiles/runTests.dir/tests.cpp.i
.PHONY : tests.cpp.i

tests.s: tests.cpp.s

.PHONY : tests.s

# target to generate assembly for a file
tests.cpp.s:
	$(MAKE) -f CMakeFiles/runTests.dir/build.make CMakeFiles/runTests.dir/tests.cpp.s
.PHONY : tests.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... rebuild_cache"
	@echo "... edit_cache"
	@echo "... runMain"
	@echo "... runTests"
	@echo "... applibrary"
	@echo "... LinkedList.o"
	@echo "... LinkedList.i"
	@echo "... LinkedList.s"
	@echo "... main.o"
	@echo "... main.i"
	@echo "... main.s"
	@echo "... tests.o"
	@echo "... tests.i"
	@echo "... tests.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

