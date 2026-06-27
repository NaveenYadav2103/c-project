#include <stdio.h>
void perfect(int n)
{
    {

        for (int i = 1; i <= n; i++)
        {
            int sum = 0;
            for (int j = 1; j <= i / 2; j++)
            {
                if (i % j == 0)
                    sum += j;
            }
            if (i == sum)
                printf("Perfect no. %d\n", i);
        }
        // return perfect;
    }
}
int main()
{
    int a;
    printf("Enter a no: ");
    scanf("%d", &a);
    perfect(a);
    // printf("Prime no.s: %d",b);
    return 0;
}