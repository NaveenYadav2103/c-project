#include <stdio.h>
int power(int base, int exp)
{
    int a = 1;

    for (int i = 1; i <= exp; i++)
    {
        a *= base;
    }
    /*if (exp > 0)
    {*/
        return a;
    /*}
    else
    {
        return (1 / a);
    }*/
}
int main()
{
    int b, c;
    printf("Enter the base value: \n");
    scanf("%d", &b);
    printf("Enter the positive exponent value: \n");
    scanf("%d", &c);
    int d = power(b, c);
    printf("%d raised to the power %d is %d.", b, c, d);
    return 0;
}