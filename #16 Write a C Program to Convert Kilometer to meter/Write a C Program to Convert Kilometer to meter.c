#include<stdio.h>
#include<conio.h>
void main()
{
    int kilometer,meter=1000;
    printf("Write a c Program to Convert Kilometer into meter\n");
    printf("Enter the value of Kilometer\n");
    scanf("%d",&kilometer);
    printf("%d Kilometer = %d Meter",kilometer,kilometer*meter);
    getch();
}
