#include <stdio.h>

#include "util.h"

// Displays a greeting
void print_greeting(char *msg)
{
    puts(msg);
}

int main(int argc, char *argv[])
{
    print_greeting("Hello, world!");
    int result = add(3, 5);
    printf("result = %d\n", result);
    return 0;
}
