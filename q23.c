#include <stdio.h>
int sum(int a, int b){
    return a+b;
}
int difference(int a, int b){
    return a-b;
}
int product(int a, int b){
    return a*b;
}
float quotient(int a, int b){
    if (a>b)
    return a/b;
    else
    return b/a;

}
int Remainder(int a, int b){
    if (a>b)
    return a%b;
    else
    return b%a;
}
int main() {
    int m,n;
    printf("Enter two no: \n");
scanf("%d %d",&m,&n);
int u=sum(m,n);
int v=difference(m,n);
int w=product(m,n);
float x=quotient(m,n);
int y=Remainder(m,n);
printf("Sum: %d\nDifference: %d\nProduct: %d\nQuotient: %.2f\nRemainder: %d\n",u,v,w,x,y);
    
    return 0;
}