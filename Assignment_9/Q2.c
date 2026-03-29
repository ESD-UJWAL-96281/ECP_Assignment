
#include <stdio.h>

void copy(FILE *, FILE *);

int main()
{
    FILE *src = fopen("data.txt", "r");
    FILE *dest = fopen("copy.txt", "w+");

    copy(dest, src);

    fclose(src);
    rewind(dest);

    printf("Contents of destination file:\n");
    char ch;
    while((ch = getc(dest)) != EOF)
        putchar(ch);

    printf("Append What u WAnt - ");

    while((ch = getchar()) != EOF)
    {
        putc(ch, dest);
    }

    fclose(dest);
    
    return 0;
}

void copy(FILE *dest, FILE *src)
{
    char ch;
    while((ch = fgetc(src)) != EOF)
    {
        fputc(ch, dest);
    }
}

