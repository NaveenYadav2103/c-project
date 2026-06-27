#include <stdio.h>
int digit_count(int n){
    int count=0;
    
    do{
        count++;
        n/=10;
    }while(n!=0);
    return count;
}
int main() {
    int a;
    printf("Enter a no: ");
    scanf("%d",&a);
    int b = digit_count(a);
    printf("The total digits in %d is %d",a,b);
    
    return 0;
}