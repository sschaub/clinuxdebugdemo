// crash.c

// - Demonstrates a crash caused by a divide by zero.

// To get a crash dump, compile and run in one of the following ways:
// 1. Compile with -g and run with valgrind:
//    gcc -g crash.c -ocrash
//    valgrind ./crash 
// 2. Compile with additional gcc flags:
//    gcc -fsanitize=address -g -fno-omit-frame-pointer crash.c -ocrash
//    ./crash 


#include <stdio.h>

int count = 0;

void crash() {
    int result = 5 / count; // causes crash
}

int main(int argc, char **argv) {
    puts("Prepare to die!");
    crash();

    return 0;
}

