
#include <stdio.h>

int digit_sum(int n);
int Rev(int n);
int amstrong(int n);

int main()
{
   int n;
   printf("Enter a number...");
   scanf("%d", &n);

   int sum = digit_sum(n);
   printf("Sum of Digit...%d\n", sum); 
   
   int rev = Rev(n);
   printf("After Reversing... %d\n", rev);

   if(rev == n)
       printf("%d Is Palindrome\n", n);
   else
       printf("%d Is Not Palindrome\n", n);

   int amst = amstrong(n);
   
   if(n == amst)
       printf("%d Is Amstrong\n", n);
   else
       printf("%d Is not Amstrong\n", amst);

    return 0;
}

int amstrong(int n)
{
    int c = 0;
    int temp = n;

    while(temp)
    {
        c++;
        temp /= 10;
    }

    int res = 0;
    while(n)
    {
        int mul = 1;
        for(int j = 0; j < c; j++)
        {
            mul *= (n % 10);
        }
        n /= 10;
        res += mul;
    }
    return res;
}

int Rev(int n)
{
    int res = 0;
    
    while(n)
    {
        int m = n % 10;
        n /= 10;
        res = (res * 10) + m;
    }
    return res;
}

int digit_sum(int n)
{
    int res = 0;

    while(n)
    {
        res = res + n % 10;
        n /= 10;
    }
    return res;
}

