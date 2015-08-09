# ======================================================
#xCXX      = colorgcc # C++ Compiler - color enabled
 xCXX      = clang++  # C++ Compiler - improved diagnosability


# ======================================================
 xCXXFLAGS += -g # Enable debugging information
 xCXXFLAGS += -fverbose-asm
#xCXXFLAGS += -w # hide all warnings 
 xCXXFLAGS += -save-temps # Generate preprocessor files
 xCXXFLAGS += -Wall # All warnings enabled
 xCXXFLAGS += -Wextra
#xCXXFLAGS += -O3


# Local project flag definitions
# ======================================================
 xCXXFLAGS += -D__ADTS_DISPLAY

 
