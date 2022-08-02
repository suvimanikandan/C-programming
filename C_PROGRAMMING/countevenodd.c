#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],i;
    int even=0,odd=0;
    printf("Enter an array element:");
    
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        even++;

        else
        odd++;
    }
    printf("Total  even no of are: %d",even);
    printf("\nTotal odd no of are:%d",odd);
}