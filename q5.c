#include <stdio.h>
int square(int n){
    return n*n;
}
int main() {
    int a;
    printf("enter a no: ");
    scanf("%d",&a);
    int b = square(a);
    printf("square of %d is: %d",a,b);
    return 0;
}