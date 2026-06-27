#include <stdio.h>
int gcd(int a, int b){
    int temp;
    //modulo method approach automatically which one is greatest.
    while(b!=0){
        temp=a%b;
        a=b;
        b=temp;
    }
    return a;
}
int main() {
    int m,n;
    printf("Enetr two nos: ");
scanf("%d %d",&m,&n);
int o = gcd(m,n);
printf("%d is gcd of %d and %d",o,m,n);    
    return 0;
}