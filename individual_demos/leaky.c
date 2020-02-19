// leaky.c
// - Demonstrates valgrind's leak detection feature
//
// Compile: gcc -g leaky.c -oleaky
// Run:     valgrind --leak-check=full ./leaky



#include <stdio.h>
#include <stdlib.h>     // Need this for malloc/free

int alloc_more_memory()
{
    char *buf2 = malloc(256);   // Room for 255+1 char C string (uninitialized; random junk)

    // malloc() returns NULL if it cannot allocate for some reason
    if (buf2 == NULL) {
        perror("unable to allocate buffer for example program");
        exit(1);
    }

    // use the memory somehow

    // oops - we forgot to deallocate
}
   

int main() {
  char *buf = malloc(256); 
  alloc_more_memory();
  free(buf);
}

