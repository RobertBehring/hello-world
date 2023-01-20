#include <stdio.h>

#define CRLF putchar('\n')

void greeting(char *version_number)
{
    char welcome_message[] = "Logger\n";
    
    CRLF;
    printf("%s", welcome_message);
    printf("%s", version_number);
    CRLF;
    CRLF;
}

void farewell(void)
{
    char farewell_message[] = "Goodbye";

    CRLF;
    printf("%s", farewell_message);
    CRLF;
    CRLF;
}

FILE* create_txt_file(void)
{
    FILE *fp;
    char file_name[] = "test.txt";
    fp = fopen(file_name, "w+");
    if (fp == NULL)
    {
        fprintf(stderr, "Could not open file %s", file_name);
        exit(1);
    }
    fprintf(fp, "Hello world how are you!\n");
    return fp;
}
void read_txt_file(FILE *fp)
{
    /* CODE SHOULD BE INPUT TO FUNCTION */
    char file_name[] = "test.txt";
    /* END */
    char c;
    printf("Start Reading\n");
    while((c = fgetc(fp)) != EOF)
    {
        printf("%c", c);
    }
    printf("End Reading\n");

}
void update_txt_file(void);
void delete_txt_file(void);