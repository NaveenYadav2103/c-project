#include <stdio.h>

int reverse_no(int n){
    int rev=0;

    while(n!=0){
        rev=rev*10+n%10;
        n/=10;
    }
    
    return rev;
}
int main() {
    int a;
    printf("Enter a no: ");
    scanf("%d",&a);
    int b = reverse_no(a);
    printf("%d in reverse: %d\n",a,b);
    return 0;
}