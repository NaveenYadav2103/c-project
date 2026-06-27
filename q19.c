#include <stdio.h>
int lcm(int a, int b)
{
    int max;
    if (a == b)
        return a;
    else
    {
        max = (a > b) ? a : b;
        while (1)
        {
            if (max % a == 0 && max % b == 0)
            {
                return max;
            }
            max++;
        }
    }
}
int main()
{
    int m, n;
    printf("Enter two no: ");
    scanf("%d %d", &m, &n);
    int o = lcm(m, n);
    printf("The lcm of %d and %d is %d.", m, n, o);

    return 0;
}