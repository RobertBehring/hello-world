#include <stdio.h>
#include <stdlib.h>
#include "loggerlib.c"

char version_number[] = "ver. 0.1";

/* logger: command line level text file creator. */
int main(void)
{
    /* Greet user */
    greeting(version_number);
    /* Prompt for command */
        /* Create .txt */
        /* Read .txt */
        /* Update .txt */
        /* Delete .txt */
    /* Farewell to user */
    farewell();
    
    return EXIT_SUCCESS;
}