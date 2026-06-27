#include <stdio.h>
int prime_no(int n){
    for (int i=2;i<=n;i++){
        int flag=1;
        for (int j=2;j*j<=i;j++){
            if(i%j==0){
            flag=0;
            break;
            }
        }
        if(flag)
        printf("%d ",i);
    }
}
int main() {
    int a;
    printf("Enter a no: ");
    scanf("%d",&a);
prime_no(a);
    //printf("Prime no.s: %d",b);
    return 0;
}