// overrun.c
// - Demonstrates what happens when a function assumes the array is large enough
//   to hold the data it writes to it

// For better crash diagnostics do one of the following:

// 1. Compile with -g and run with valgrind:
//    gcc -g overrun.c -ooverrun
//    valgrind ./overrun abcdef
// 2. Compile with additional gcc flags:
//    gcc -fsanitize=address -g -fno-omit-frame-pointer overrun.c -ooverrun
//    ./overrun abcdef

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int overrun(char *data)
{
  char buf[6];
  //char *buf = (char*) malloc(6);

  strcpy(buf, data);
}

int main(int argc, char *argv[])
{
  puts("Calling overrun()...");
  overrun(argv[1]);
  puts("Ready to end...");
}
