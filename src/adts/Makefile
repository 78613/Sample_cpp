# Files specified separetely.
# ======================================================
include Makefile.files
HPP_FILES += $(xHPP_FILES)
CPP_FILES += $(xCPP_FILES)


# Everything below this line is standard Makefile logic:
# ======================================================
DEPS    += $(HPP_FILES)
OBJECTS += $(patsubst %.c,%.o,$(CPP_FILES))    


# Declare non-files
# ======================================================
.PHONY: all 


# Use color enabled GCC output for readability
# ======================================================
#CXX = g++      # C++ Compiler
 CXX = clang++  # C++ Compiler - improved diagnosability


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
	rm -fr bin *.[ii,s,o,so,bc]

build:
	@echo ""
	@echo "Compile Shared Library:"
	@echo "======================="
	mkdir -p bin
	$(CXX) -I ${PWD} -fPIC $(CXXFLAGS) $(CPP_FILES) 
	$(CXX) -I ${PWD} -shared -fPIC -o libadts.so $(OBJECTS) -lrt

cleanup:
	@echo ""
	@echo "Archive Files:"
	@echo "======================="
	mkdir -p bin
	mv *.[ii,s,o,bc] bin/
	mv *.so bin/


