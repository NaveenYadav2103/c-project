#include <stdio.h>
#include<math.h>
void armstrong(int n){
    int temp=n,digits=0;
    while(n!=0){
        n/=10;
        digits++;  
    }
    int a=0;
    n=temp;
    while(n!=0){
        a += (int)(pow(n%10,digits)+0.5);
        n/=10;
    }
    if(temp==a)
    printf("Armstrong digit");
    else
    printf("Not armstrong no.");
}
int main() {
    int a;
    printf("Enter a no: ");
    scanf("%d",&a);
    armstrong(a);
    return 0;
}