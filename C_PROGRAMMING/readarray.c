#include<stdio.h>
#include<conio.h>
void main()
{
    int a[5],i;
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);
    
    for(i=0;i<5;i++)
    printf("\n Array element at index %d is: %d",i,a[i]);
}