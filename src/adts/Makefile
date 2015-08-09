# ======================================================
# Makefile
#    |
#    +----- Makefile.files // Source Code
#    +----- Makefile.rules // Common compulation rules
#
# ======================================================

# Files specified separetely.
# ======================================================
include Makefile.files.mk
HPP_FILES += $(xHPP_FILES)
CPP_FILES += $(xCPP_FILES)


# Rules are common to all compilation units.	
# ======================================================
include ../Makefile.rules.mk
CXX       = $(xCXX)
CXXFLAGS += $(xCXXFLAGS)
CXXFLAGS += -c    # Compile only - No linking
CXXFLAGS += -fPIC # Position independent code - dynamic linking | shared library


# Everything below this line is standard Makefile logic:
# ======================================================
DEPS    += $(HPP_FILES)
OBJECTS += $(patsubst %.c,%.o,$(CPP_FILES))    


# Declare non-files
# ======================================================
.PHONY: all 


# "all" should always be the first defined target to ensure default build
# ======================================================
all: prepare \
     build   \
	 cleanup

prepare: 
	@echo "" 
	@echo "Prepare:" 
	@echo "========"
	rm -fr bin *.[ii,s,o,so,bc]
build:
	@echo ""
	@echo "Compile Shared Library:"
	@echo "======================="
	mkdir -p bin
	$(CXX) -I ${PWD} $(CXXFLAGS) $(CPP_FILES) 
	$(CXX) -I ${PWD} -shared -fPIC -o libadts.so $(OBJECTS) -lrt
cleanup:
	@echo ""
	@echo "Cleanup:"
	@echo "========"
	mkdir -p bin
	mv *.[i,s,o] bin/
	mv *.ii bin/
	mv *.bc bin/
	mv *.so bin/
