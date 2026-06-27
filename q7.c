#include <stdio.h>
void prime_no(int n)
{
    int flag = 1;
    if (n < 2)
    {
        printf("Not a prime no.");
        flag = 0;
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                flag = 0;
                break;
            }
        }
    }
    if (flag == 0)
        printf("Not prime no.");
    else
        printf("Prime no.");
}
int main()
{
    int a;
    printf("Enter a no: ");
    scanf("%d", &a);
    prime_no(a);

    return 0;
}