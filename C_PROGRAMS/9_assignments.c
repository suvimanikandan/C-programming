#include<stdio.h>
#include<conio.h>
int main()
{
  int num;
  printf("ENTER A NUMBER:");
  scanf("%d",&num);
  if(num%2==0)
  {
    printf("THE ENTERED NUMBER IS EVEN");
  }
  else
  {
    printf("THE ENTERED NUMBER IS ODD" );
  }
}
