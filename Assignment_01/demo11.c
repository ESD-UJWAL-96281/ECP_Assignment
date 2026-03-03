#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {

    printf("Data Type Size Range\n");

    printf("char %lu %d to %d\n", sizeof(char), CHAR_MIN, CHAR_MAX);

    printf("unsigned char %lu  to %u\n", sizeof(unsigned char), UCHAR_MAX);

    printf("short int %lu %d to %d\n", sizeof(short int), SHRT_MIN, SHRT_MAX);

    printf("unsigned short %lu to %u\n", sizeof(unsigned short int), USHRT_MAX);

    printf("int%lu  %d to %d\n", sizeof(int), INT_MIN, INT_MAX);

    printf("unsigned int %lu  to %lu\n", sizeof(unsigned int), UINT_MAX);

    printf("long int %lu %ld to %ld\n", sizeof(long int), LONG_MIN, LONG_MAX);

    printf("unsigned long  %lu  to %lu\n", sizeof(unsigned long int), ULONG_MAX);

    return 0;
}
