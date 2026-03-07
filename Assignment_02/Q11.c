#include<stdio.h>

int main()
{
	int x, y;
	printf("Enter co-ordinates x & y\n");
	scanf("%d%d", &x, &y);

	if(x > 0 && y > 0)
		printf(" x - %d & y - %d Lies in Ist Quadrant\n", x, y);
	else if(x > 0 && y < 0)
		printf(" x - %d & y - %d Lies in IVth Quadrant\n", x, y);
	else if(x < 0 && y > 0)
		printf(" x - %d & y - %d Lies in IInd Quadrant\n", x, y);
	else if(x < 0 && y < 0)
		printf(" x - %d & y - %d Lies in IIIrd Quadrant\n", x, y);

	return 0;
}
