#include <stdio.h>

#define CRLF putchar('\n')

void greeting(char *version_number)
{
    char welcome_message[] = "Logger\n";
    
    CRLF;
    printf(welcome_message);
    printf(version_number);
    CRLF;
    CRLF;
}

void farewell(void)
{
    char farewell_message[] = "Goodbye";

    CRLF;
    printf(farewell_message);
    CRLF;
    CRLF;
}

FILE* create_txt_file(void)
{
    FILE *fp;
    char file_name[] = "test.txt";
    fp = fopen(file_name, "w");
    return fp;
}
void read_txt_file(void);
void update_txt_file(void);
void delete_txt_file(void);