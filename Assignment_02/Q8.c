#include<stdio.h>
int main()
{
	int num,res = 0;
	printf("Enter the Quantity\n");
	scanf("%d", &num);

	if(num >= 30 && num< 50)
	{
		res = num*5;
		printf("Total price %d for Qantity %d\n", res,num);
		printf("Discount got %d\n", res / 10);
		printf("Total is %d\n", res - res / 10);
	}
	else if(num >= 50)
	{
		res = num * 5;
                printf("Total price %d for Qantity %d\n", res,num);
 		printf("Discount got %d\n", res / 15);
 		printf("Total is %d\n", res - res / 15);

	}
	else
	{
		res = 5 * num;
		printf("Cost is %d for Quantity %d\n", res,num);
	}

	return 0;
}
