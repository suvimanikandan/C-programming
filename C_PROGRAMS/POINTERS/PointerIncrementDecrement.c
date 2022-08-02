#include<stdio.h>
void main()
{
  int a[]={3,2,67,0,56};
  int *p;
  p=a;
  printf("%d\n",*p++ );
  printf("%d\n",*(p++),*p++ );
  //preincrement
  printf("%d\n",*++p );
  //postincrement
  printf("%d\n",*p-- );
  //preincrement
  printf("%d\n",*--p );
  printf("%d",*p);




}
