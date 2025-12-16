#include <stdio.h>
void dispbinary(unsigned char n)
{
    unsigned char mask = 0x80;

    while (mask)
    {
        if (n & mask)
            printf("1");
        else
            printf("0");

        mask >>= 1;
    }
    printf("\n");
}

int main()
{
    unsigned char num;

    printf("Enter a number : ");
    scanf("%u", &num);

    printf("Binary = ");
    dispbinary(num);

    return 0;
}
