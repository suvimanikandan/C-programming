#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);

    if (ch>='0'&& ch<='9'){
      printf("%c is  a digit",ch);
    }


    else{
        printf("%c NOT  A DIGIT",ch);
    }
    getch();
    return(0);

}
