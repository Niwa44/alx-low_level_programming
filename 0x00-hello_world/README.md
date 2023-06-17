0_gcc -E $CFILE -o c
1_gcc -c $CFILE -o "${CFILE%.*}.o"
Make sure to replace $CFILE with the actual name of your C file. This script uses the -c option to compile the C file without linking, and it generates the object file with the same base name as the C file (${CFILE%.*}) but with the extension .o. The ${CFILE%.*} syntax is used for parameter expansion to remove the extension from the C file name.

After executing this script, the C file will be compiled without linking, and the resulting object file will have the same name as the C file but with the .o extension.
2_gcc -S $CFILE -o "${CFILE%.*}.s". This script uses the -S option with gcc to generate the assembly code of the C file specified by $CFILE, and it saves the output in a file with the same base name as the C file (${CFILE%.*}) but with the extension .s. The ${CFILE%.*} syntax is used for parameter expansion to remove the extension from the C file name.
3_gcc $CFILE -o cisfun
creates an executable named "cisfun" using the -o option.
4_#include <stdio.h>

int main() {
    puts("Programming is like building a multilingual puzzle");
    return 0;
}

