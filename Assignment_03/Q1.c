#include<stdio.h>
int main()
{
  char ch;
  int n;
  printf("Enter a character.. ");
  scanf("%c", &ch);
  printf("Enter how many times u want print...");
  scanf("%d", &n);
  for(int i = 0; i < n; i++)
  {
      printf("%c ", ch);
  }
    printf("\n");

    return 0;
}

   
