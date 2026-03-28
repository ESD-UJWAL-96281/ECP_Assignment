
#include <stdio.h>
#include "head.h"



#define SWAP(A,B,type) {type c = A; A = B; B = c;}

char *ITOA(int n, char *s, int b)
{
    int i = 0, f = 0;

    if(!n)
    {
        s[i++] = '0';
        s[i] = '\0';
        return s;
    }
    
    if(n < 0 && b == 10)
    {
        f = 1;
        n = -n;
    }

    while(n)
    {
        int m = n % 10;
        n /= 10;
        s[i++] = (m + '0');
    }

    if(f)
        s[i++] = '-';

    s[i] = '\0';
    
    STRREV(s);

    return s;
}

int ATOI(const char *s)
{
    int i = 0, res = 0, sign = 1;

    while(s[i] == '-')
    {
        sign = -1;
        i++;
    }
    while(s[i])
    {
        res = (res * 10) + (s[i] - '0');
        i++;
    }
    return res * sign;
}

void rm_sub(char *s, char *sub)
{
    int i = 0;
    while(sub[i])
    {
        int j = 0;
        while(s[j])
        {
            if(sub[i] == s[j])
            {
                int k = j;
                while(s[k])
                {
                    s[k] = s[k+1];
                    k++;
                }
            }
            else
            j++;
        }
        i++;
    }

    return;
}

void rm_char(char *s, char ch)
{
    int i = 0;
    while(s[i])
    {
        if(ch == s[i])
        {
            int j = i;
            while(s[j])
            {
                s[j] = s[j+1];
                j++;
            }
        }
        else
        i++;
    }
    return;
}

char *STRSTR(const char *src, const char *sub)
{
    int i, j;
    for(i = 0; src[i]; i++)
    {
        for(j = 0; sub[j]; j++)
        {
            if(src[i + j] != sub[j])
                break;
        }
        if(sub[j] == '\0')
            return (char *)&src[i];
    }
    return NULL;
}

char *STRCHR(const char *s, int ch)
{
    while(*s)
    {
        if(*s == ch)
            return (char *)s;
        s++;
    }

    if(ch == '\0')
        return (char *)s;

    return NULL;
}

char *STRREV(char *str)
{   
    char *temp = str;
    char *start = str;
    char *end = str;

    while(*end)
    {
        end++;
    }
    end--;

    while(start < end)
    {
        SWAP(*start, *end, char)
        start++;
        end--;
    }
    return temp;
}

int STRICMP(const char *s1, const char *s2)
{
    while(*s1 && *s2)
    {
        int res = *s1 - *s2;
        if(res == 32 || res == -32 || res == 0)
        {
        }
        else
            return res;
        s1++, s2++;
    }
    return *s1 - *s2;
}

int STRCMP(const char *str1, const char *str2)
{
    while(*str1 && *str1 == *str2)
    {
        str1++;
        str2++;
    }
    return *str1 - *str2;
}

char *STRCAT(char *dest, const char *src)
  {
      char *temp = dest;
      while(*dest)
      {
          dest++;
      }
      while(*dest++ = *src++)
      {
         
      }
      return dest;
  }
  
  char* STRCPY(char *dest, const char *src)
  {
      char *temp = dest;
      while(*dest++ = *src++)
      {
      }
      return temp;
  }
  
  size_t STRLEN(const char *s)
  {
      int len = 0;
      while(s[len])
      {
          len++;
      }
      return len;
  }

