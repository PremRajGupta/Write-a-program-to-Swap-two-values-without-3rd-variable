//Write a program without third varible swap two number
#include<stdio.h>
#include<conio.h>
void main()
{
     int a=24,b=3;
     clrscr();
     printf("\n Without swap A=%d B=%d",a,b);
     a=a-b;
     b=a+b;
     a=b-a;
     printf("\n Swap A=%d B=%d",a,b);
getch();
}