## -*- Makefile -*-
##
## User: Michael
## Time: Nov 3, 2014 7:48:26 PM
## Makefile created by Oracle Solaris Studio.
##
## This file is generated automatically.
##


#### Compiler and tool definitions shared by all build targets #####
CCC = g++
CXX = g++
BASICOPTS = -g
CCFLAGS = $(BASICOPTS)
CXXFLAGS = $(BASICOPTS)
CCADMIN = 


# Define the target directories.
TARGETDIR_svsh=.


all: svsh

## Target: svsh
OBJS_svsh =  \
	$(TARGETDIR_svsh)/functions.o \
	$(TARGETDIR_svsh)/main.o
USERLIBS_svsh = $(SYSLIBS_svsh) 
DEPLIBS_svsh =  
LDLIBS_svsh = $(USERLIBS_svsh)


# Link or archive
$(TARGETDIR_svsh)/svsh: $(TARGETDIR_svsh) $(OBJS_svsh) $(DEPLIBS_svsh)
	$(LINK.cc) $(CCFLAGS_svsh) $(CPPFLAGS_svsh) -o $@ $(OBJS_svsh) $(LDLIBS_svsh)


# Compile source files into .o files
$(TARGETDIR_svsh)/functions.o: $(TARGETDIR_svsh) functions.cpp
	$(COMPILE.cc) $(CCFLAGS_svsh) $(CPPFLAGS_svsh) -o $@ functions.cpp

$(TARGETDIR_svsh)/main.o: $(TARGETDIR_svsh) main.cpp
	$(COMPILE.cc) $(CCFLAGS_svsh) $(CPPFLAGS_svsh) -o $@ main.cpp



#### Clean target deletes all generated files ####
clean:
	rm -f \
		$(TARGETDIR_svsh)/svsh \
		$(TARGETDIR_svsh)/functions.o \
		$(TARGETDIR_svsh)/main.o
# Enable dependency checking
.KEEP_STATE:
.KEEP_STATE_FILE:.make.state.GNU-amd64-Linux

