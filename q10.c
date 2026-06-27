#include <stdio.h>
int sum_natural(int n){
    int sum=0;
    for (int i=1;i<=n;i++){
        sum+=i;
    }
    printf("Sum of %d natural no is: %d",n,sum);
}
int main() {
    int a;
    printf("Enter a no: ");
    scanf("%d",&a);
    sum_natural(a);
    
    return 0;
}