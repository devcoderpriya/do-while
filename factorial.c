#include<stdio.h>
int main()
{
    int a;
    printf("enter the number :");
    scanf("%d",&a);

    int b;
    printf("enter the number :");
    scanf("%d",&b);

    int fact=1;

    do{
        fact=fact*a; 
    a=a-1;
    }
    while(a>=b);
     printf("%d",fact);
    return 0;
}
