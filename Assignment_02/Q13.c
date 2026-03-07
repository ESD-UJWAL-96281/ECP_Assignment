
#include<stdio.h>

void sum(int n1, int n2)
{
	printf("%d + %d = %d", n1, n2, n1+n2);
}

void sub(int n1, int n2)
{
	 printf("%d - %d = %d", n1, n2, n1-n2);
}

void mul(int n1, int n2)
{
	printf("%d * %d = %d", n1, n2, n1*n2);
}

void div(int n1, int n2)
{
	printf("%d / %d = %d", n1, n2, n1/n2);
}

int main()
{
	int n1, n2;
	char ch;

	printf("Enter num1 ");
	scanf("%d", &n1);
	printf("Enter operation (/ * + -) ");
	scanf("%*c%c", &ch);
	printf("Enter num2 ");
	scanf("%d", &n2);

	switch(ch)
	{
		case '+':
			sum(n1, n2);
			break;
		case '-':
			sub(n1, n2);
			break;
		case '*':
			mul(n1, n2);
			break;
		case '/':
			if(n2 == 0)
				printf("Should not divid %d with 0", n1);
			else
				div(n1,n2);
			break;
		default:
			printf("Invalid Operation?????\n");
	}

	return 0;
}

