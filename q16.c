#include <stdio.h>
void fib(int n)
{
    int a = 0, b = 1, c;
    for (int i = 1; i <= n; ++i)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
}
int main()
{
    int a;
    printf("Enter no of terms: ");
    scanf("%d", &a);
    fib(a);

    return 0;
}