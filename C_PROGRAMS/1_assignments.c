#include<stdio.h>
#include<conio.h>
int main()
{
float breadth,width,perimeter;
printf("Enter Breadth value:");
scanf("%f",&breadth);
printf("Enter width value:");
scanf("%f",&width);
perimeter=2*(breadth+width);
printf("THE PERIMETER OF RECTANGLE = %f  ",perimeter);
return 0;
}
