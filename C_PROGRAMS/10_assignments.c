#include <stdio.h>
#include<conio.h>
int main()
{
int a, b, i, flag;
printf(“Enter a value : “);
scanf(“%d”,&a);
printf(“Enter b value : “);
scanf(“%d”,&b);
printf(“Prime Numbers between %d and %d : “, a, b);
while (a < b)
{
flag = 0;
for(i = 2; i <= a/2; ++i)
{
if(a % i == 0)
{
flag = 1;
break;
}
}
if (flag == 0)
printf(“%d “, a);
++a;
}
printf(“\n”);
return 0;
}
