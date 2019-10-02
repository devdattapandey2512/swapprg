#include<stdio.h>
int main()
{
int a,b;
printf("Enter value of a and b");
scanf("%d%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("Value of a and b after swapping is %d and %d",a,b);
return 0;
}
