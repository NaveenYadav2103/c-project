#include <stdio.h>
#include <stdlib.h>
void palindrome(int n)
{
    int rev = 0;
    int temp = abs(n);
    while (temp != 0)
    {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    if (rev == abs(n))
        printf("palindrome");
    else
        printf("not palindrome");
}
int main()
{
    int a;
    printf("Enter a no: ");
    scanf("%d", &a);
    palindrome(a);
    return 0;
}