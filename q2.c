#include <stdio.h>
void numcheck(int n)
{
    if (n > 0)
    {
        printf("%d is a positive no.", n);
    }
    else if(n<0)
    {
        printf("%d is a negative no.", n);
    }
    else
    {
        printf("%d is a zero.", n);
    }
    return ;
}
int main()
{
    int a;
    printf("Enter a no: ");
    scanf("%d", &a);
    numcheck(a);
    return 0;
}