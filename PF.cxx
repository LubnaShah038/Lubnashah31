#include<stdio.h>
#include<conio.h>
void main()
{
 int a,s,c;
 clrscr();

 printf("\n Enter A Number: ");
 scanf("%d",&a);

 s=a*a;  //Square = number * number
 c=s*a;  //Cube = Square * number

 printf("\n Square of %d is = %d",a,s);

 printf("\n\n Cube of %d is = %d",a,c);

 getch();
}