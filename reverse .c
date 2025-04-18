#include<stdio.h>
int main()
{
 int a;
printf("enter the number :");
scanf("%d",&a);
int reverse=0;
int rem;
do{
rem=a%10;
reverse=reverse*10+reaminder;
a=a/10;
}
while(a!=0);
printf("%d",reverse);
return 0;
}
