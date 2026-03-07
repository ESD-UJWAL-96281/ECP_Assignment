
#include<stdio.h>

int main()
{
	char ch;
	printf("Enter a character -->\n");
	scanf("%c", &ch);

	if(ch >= 97 && ch <= 122)
		printf("%c is Lower case Alphabet\n", ch);
	else if(ch >= 'A' && ch <= 'Z')
		printf("%c is Upper case Alphabet\n", ch);
	else if(ch >= '0' && ch <= '9')
		printf("%c is Digit\n", ch);
	else if(ch == ' ')
		printf("%c is Space\n", ch);
	else if(ch == '\n')
                printf("%c is New Line || Enter\n", ch);
	else if(ch == '\t')
                printf("%c is Tab\n", ch);
	else if(ch == '\r')
		printf("%c is Carriage return\n", ch);
	else
		printf("%c is Not Listed\n", ch);

	return 0;
}

