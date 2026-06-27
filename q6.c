#include <stdio.h>
int fact(int n)
{
    if (n < 1)
        return 1;
    return n * fact(n - 1);
}
int main()
{
    int a;
    printf("Enter a no: ");
    scanf("%d", &a);
    int b = fact(a);
    printf("%d", b);
    return 0;
}