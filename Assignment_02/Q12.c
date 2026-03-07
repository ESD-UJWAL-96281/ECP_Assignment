#include<stdio.h>

int main()
{
	int month;
	printf("Enter Month -->\n");
	scanf("%d", &month);
	
	switch(month)
        
	{
		case 1:
			printf("%d Days in January\n", 30);
			break;
		case 2:
			printf("%d Days in February\n", 28);
			break;
		case 3:
			printf("%d Days in March\n", 31);
			break;
		case 4:
			printf("%d Days in April\n", 30);
			break;
		case 5:
			printf("%d Days in May\n", 31);
		case 6:
			printf("%d Days in June\n", 30);
			break;
		case 7:
			printf("%d Days in July\n", 31);
			break;
		case 8:
			printf("%d Days in August\n", 31);
			break;
		case 9:
			printf("%d Days in September\n", 30);
			break;
		case 10:
			printf("%d Days in Octomber\n", 31);
			break;
		case 11:
			printf("%d Days in November\n", 30);
			break;
		case 12:
			printf("%d Days in December\n", 31);
			break;
		default:
			printf("Invalid Input\n");
	}

	return 0;

}
