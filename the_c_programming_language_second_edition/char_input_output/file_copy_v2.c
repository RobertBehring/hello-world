#include <stdio.h>

/* copy input to output; 2nd version */
main()
{
    int c;

    /* Exercise 1-6 */
    printf("(getchar() != EOF) = %d\n", getchar() != EOF);
    /* Exercise 1-7 */
    printf("EOF = %d\n", EOF);

    while ((c = getchar()) != EOF)
        putchar(c);
}