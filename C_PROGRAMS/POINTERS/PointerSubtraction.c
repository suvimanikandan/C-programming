#include<stdio.h>
void main()
{
  int a[]={2,3,4,0,-7};
  int *p=a;
  int *q=&a[3];
  printf("q-p=%d\n",q-p);
  printf("p-q=%d\n",p-q);
  printf("value=%d",*q);
  q=q-2;
  printf("value=%d",*q);
}
