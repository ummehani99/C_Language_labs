
#include<stdio.h>
int main()
{
char gender,str[20];
int age;
float height;


printf("\tEnter your name:");
scanf("%s",&str);
printf("\tEnter your age:");
scanf("%d",&age);
printf("\tEnter your gender(m/f):");
scanf(" %c",&gender);
printf("\tEnter your height:");
scanf("%f",&height);
return 0;
}