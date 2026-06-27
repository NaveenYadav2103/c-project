#include <stdio.h>
void largest_num(int a,int b){
if(a>b)
printf("%d is largest no than %d.",a,b);
else if(b>a)
printf("%d is largest no than %d.",b,a);
else
printf("Both are equal no.");
}

int main() {
    int p,q;
    printf("Enter two no: ");
    scanf("%d %d",&p,&q);
    largest_num(p,q);
    
    return 0;
}