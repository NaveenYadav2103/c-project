#include <stdio.h>
void table(int n)
{
    int a = 1;
    for (int i = 1; i <= 10; i++)
    {
        a = n * i;
        printf("%d x %d = %d\n", n, i, a);
    }
}
int main()
{
    int b;
    printf("Enter a no: ");
    scanf("%d", &b);
    table(b);
    return 0;
}