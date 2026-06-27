#include <stdio.h>
void largest_num(int a, int b, int c)
{
    if (a > b && a > c)
        printf("%d is largest no than %d %d.", a, b, c);
    else if (b > a && b > c)
        printf("%d is largest no than %d %d.", b, a, c);
    else if (c > a && c > b)
        printf("%d is largest no than %d %d.", c, a, b);
    else if (a == c && a > b)
        printf("%d is greater than %d", a, b);
    else if (a == b && a > c)
        printf("%d is greater than %d", a, c);
    else if (b == c && b > a)
        printf("%d is greater than %d", b, a);
    else
        printf("All three are equal no.");
}

int main()
{
    int p, q, r;
    printf("Enter three no: ");
    scanf("%d %d %d", &p, &q, &r);
    largest_num(p, q, r);

    return 0;
}