
#include <stdio.h>
int main()
{
    FILE *fptr = fopen("data.txt", "r"); 

    char ch;
    while((ch = fgetc(fptr)) != EOF)
    {
        printf("%c", ch);
    }
    printf("\n");

    fclose(fptr);
    
    return 0;
}

