#include <stdio.h>

/* print Fahrenheit-Celsius table */
main()
{
    int fahr;

    for (fahr = 0; fahr <= 300; fahr = fahr + 20)
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}

/*
%d      print as decimal integer
%6d     print as decimal integer, at least 6 characters wide
%f      print as floating point
%6f     print as floating point, at least 6 characters wide
%.2f    print as floating point, 2 characters after decimal point
%6.2f   print as floating point, at least 6 wide and 2 after decimal point
%o      print as octal
%x      print as hexadecimal
%c      print as character
%%      print % itself*/