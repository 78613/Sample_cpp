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


# ======================================================
LPATHS += -L../adts/bin/
LNAMES += -ladts


HPATHS += -I .
HPATHS += -I ../adts/


# Everything below this line is standard Makefile logic:
# ======================================================
DEPS    += $(HPP_FILES)
OBJECTS += $(patsubst %.c,%.o,$(CPP_FILES))    

# declare non-files
.PHONY: all 


# ======================================================
# "all" should always be the first defined target to ensure default build
all: prepare \
     build   \
     cleanup \
	 unittest

prepare:
	@echo ""
	@echo "Prepare:"
	@echo "========"
	rm -fr bin *.[i,s,o,] *.ii *.bc
build:
	@echo ""
	@echo "Compile:"
	@echo "========"
	mkdir -p bin
	$(CXX)  $(CXXFLAGS) $(CPP_FILES) -o bin/utest.exe $(LPATHS) $(LNAMES) $(HPATHS)
cleanup:
	@echo ""
	@echo "Cleanup:"
	@echo "========"
	date
	mv *.[i,s,o] bin/
	mv *.ii bin/
	mv *.bc bin/
unittest:	
	@echo ""
	@echo "Unit Test:"
	@echo "=========="
	bin/utest.exe 


# ======================================================
# If compilation failure, see README.md file in ths git repository.
# ======================================================
