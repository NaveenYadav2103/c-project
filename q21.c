#include <stdio.h>
void menu()
{
    int n;
    do
    {
        printf("Choose one: 1=prime; 2=perfect; 3=factorial; 4=reverse; 5=exit: \n");
        scanf("%d", &n);
        if (n == 1)
        {
            int a, flag = 1;
            printf("Enter a no: ");
            scanf("%d", &a);
            if (a <= 1)
                flag = 0;
            for (int i = 2; i < a; i++)
            {
                if (a % i == 0)
                {
                    flag = 0;
                    break;
                }
            }
            if (flag == 0)
                printf("Not prime no.\n");
            else
                printf("Prime no.\n");
        }
        else if (n == 2)
        {
            int a, sum = 0;
            printf("Enter a no: ");
            scanf("%d", &a);
            int b = a;
            for (int i = 1; i < a; i++)
            {
                if (a % i == 0)
                    sum += i;
            }
            if (b == sum)
                printf("Perfect no.\n");
            else
                printf("Not perfect no.\n");
        }
        else if (n == 3)
        {
            int a, fact = 1;
            printf("Enter a no: ");
            scanf("%d", &a);
            for (int i = a; i >= 1; i--)
            {
                fact *= i;
            }
            printf("factorial: %d\n", fact);
        }
        else if (n == 4)
        {
            int a, rev = 0;
            printf("Enter a no: ");
            scanf("%d", &a);
            while (a != 0)
            {
                rev = rev * 10 + a % 10;
                a /= 10;
            }
            printf("Reverse no is: %d\n", rev);
        }
        else if (n == 5)
        {
            printf("Thanks, Bye!\n");
        }
        else
        {
            printf("Choose correct operation option: \n");
        }
    } while (n != 5);
}

int main()
{
    menu();
    return 0;
}