#include <stdio.h>
#include<stdlib.h>
int sum_d(int n){
    int sum=0;
    while(n!=0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int reverse(int n){
    int rev=0;
    while(n!=0){
        rev=rev*10+n%10;
        n/=10;
    }
    return rev;
}
int digit_count(int  n){
    int count=0;
    if (n==0){
        count=1;
    }
    while(n!=0){
        count++;
        n/=10;
    }
    return count;
}
void palindrome(int n)
{
    if(n<0){
        printf("Not palindrome.");
        return;
    }

    if (reverse(n)==n)
        printf("palindrome");
    else
        printf("not palindrome");
}
int main() {
    int a;
    printf("Enter a no: ");
    scanf("%d",&a);
    int b = sum_d(a);
int c = reverse(a);
int d = digit_count(a);
printf("Sum of digits: %d\n",b);
printf("REverse: %d\n",c);
printf("Digits count: %d\n",d);
palindrome(a);
    
    return 0;
}