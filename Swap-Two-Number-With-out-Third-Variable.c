//Without Third Variable..
#include<stdio.h>
int main ()
{

int a,b;
printf("Enter the Fast Number:");
scanf("%d",&a);
printf("Enter The Second Number:");
scanf("%d",&b);

printf("\n Befor Swap a=%d and b=%d",a,b);

a=a+b;
b=a-b;
a=a-b;


printf("\n After Swap a=%d and b=%d",a,b);


return 0;
}