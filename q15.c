#include <stdio.h>
void largest(int n){
    int max=1,reverse=0;
    while(n!=0){
        reverse=n%10;
        if (reverse>max)
        max=reverse;
        n/=10;
    }
    printf("%d",max);

}
int main() {
    int a;
    printf("Enter a no: ");
    scanf("%d",&a);
    largest(a);
    
    return 0;
}