#include <stdio.h>
void perfect(int n){
    int sum=0;
    int a=n;
    for(int i=1;i<n;i++){
        if(n%i==0)
        sum+=i;
    }
    if (a==sum)
    printf("%d is a perfect no.",a);
    else
    printf("%d is not a perfect no.",a);
}
int main() {
    int b;
    printf("Enter a no: ");
    scanf("%d",&b);
    perfect(b);
    
    return 0;
}