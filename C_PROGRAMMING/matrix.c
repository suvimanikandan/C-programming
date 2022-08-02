#include<stdio.h>
#include<conio.h>
#define N 50
void main()
{
int a[3][3],b[3][2],c[3][2],i,j k,sum;
printf("Enter rows and columns for first matrix:\n");

printf("Enter first matrix:\n");
for(i=0;i<3;i++)
{
for(j=0;j<2;j++)
{
scanf("%d",&a[i][j],b[i][j]);
}
 sum=0;
            for(k=0;k<3;k++)
            {

                sum=sum+(a[i][k]*b[k][j]);
            }
            c[i][j]=sum;

        }

    }

