#include <stdio.h>
int digit_sum(int n){
    int sum=0;
    while(n!=0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int main() {
    int a;
    printf("Enter a no: ");
    scanf("%d",&a);
    int b = digit_sum(a);
    printf("The sum of digits in %d is %d",a,b);
    
    return 0;
}