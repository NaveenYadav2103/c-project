#include <stdio.h>
void even_odd(int n){
    if (n%2==0)
    printf("%d is an even no.",n);
    else
    printf("%d is an odd no.",n);
    //return ;
}
int main() {
    int a;
    printf("Enter a no: ");
    scanf("%d",&a);
    even_odd(a);
    return 0;
}