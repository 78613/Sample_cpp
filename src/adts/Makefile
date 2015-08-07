# ======================================================
#HFILES  += adts.hpp

# ======================================================
#CFILES  += adts_rbt.cpp

# ======================================================
 CFILES  += test.cpp


# Everything below this line is standard Makefile logic:
# ======================================================
DEPS    += $(HFILES)
OBJECTS += $(patsubst %.c,%.o,$(CFILES))    

# declare non-files
.PHONY: all 

# Use color enabled GCC output for readability
# ======================================================
 CC       = g++ # C   compiler
 CXX      = g++      # C++ Compiler

# ======================================================
 CFLAGS  += -c 
 CFLAGS  += -g # Produce debugging information
 CFLAGS  += -fverbose-asm
 CFLAGS  += -w # hide all warnings 
 CFLAGS  += -save-temps
#CFLAGS  += -std=gnu99 # Use the c99 standard / with gnu extensions
 CFLAGS  += -Wall 
 CFLAGS  += -Wextra
 CFLAGS  += -O3
 CFLAGS  += -D__ADTS_DISPLAY

#CFLAGS  += -v 
#CFLAGS  += -Q # Print compiled function and statistics
#CFLAGS  += -Werror 
#CFLAGS  += -pedantic


# ======================================================
 CXXFLAGS += -c
 CXXFLAGS += -g #produce debugging information
 CXXFLAGS += -fverbose-asm
#CXXFLAGS += -w # hide all warnings 
 CXXFLAGS += -save-temps
 CXXFLAGS += -Wall
 CXXFLAGS += -Wextra
#CXXFLAGS += -O3
 CXXFLAGS += -D__ADTS_DISPLAY


# ======================================================
# "all" should always be the first defined target to ensure default build
all: prepare \
     build   \
     cleanup


prepare: 
	@echo "" 
	@echo "Cleanup:" 
	@echo "========"
	rm -fr bin *.[ii,s,o,so]

build:
	@echo ""
	@echo "Compile Shared Library:"
	@echo "======================="
	mkdir -p bin
	$(CXX) -I ${PWD} -fPIC $(CXXFLAGS) $(CFILES) 
	$(CXX) -I ${PWD} -shared -fPIC -o libadts.so $(OBJECTS) -lrt
	#$(CXX) -I ${PWD} -shared -fPIC -o libadts.so ${OBJECTS} -lrt

cleanup:
	@echo ""
	@echo "Archive Files:"
	@echo "======================="
	mkdir -p bin
	mv *.[ii,s,o] bin/
	mv *.so bin/


