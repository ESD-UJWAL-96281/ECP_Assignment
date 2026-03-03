#include <stdio.h>
#include <limits.h>


int main() {

    printf("Data Type\t Size\tFormat Specifier\tRange\n");
    printf("char\t %lu\t %%c\t %d to %d\n", sizeof(char), CHAR_MIN, CHAR_MAX);
    printf("unsigned char\t %lu\t %%c\t 0  to %u\n", sizeof(unsigned char), UCHAR_MAX);
    printf("short int\t %lu\t %%hd\t%d to %d\n", sizeof(short int), SHRT_MIN, SHRT_MAX);
    printf("unsigned short\t %lu\t%%hu\t to %u\n", sizeof(unsigned short int), USHRT_MAX);
    printf("int\t%lu\t%%d\t  %d to %d\n", sizeof(int), INT_MIN, INT_MAX);
    printf("unsigned int\t %lu\t%%u\t0  to %u\n", sizeof(unsigned int), UINT_MAX);
    printf("long int\t %lu\t%%ld\t %ld to %ld\n", sizeof(long int), LONG_MIN, LONG_MAX);
    printf("unsigned long\t  %lu\t%%lu\t 0  to %lu\n", sizeof(unsigned long int), ULONG_MAX);

    return 0;
}
