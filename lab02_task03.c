// Write a following program and observe the result:
#include<stdio.h>
#include<math.h>
#define pi 3.1415927
int main()
{
float altitude,base,radius,t,s;


printf("\n\n\t\t Enter the value for Altitude of a Triangle. ");
scanf("%f", &altitude);
printf("\n\n\t\t Enter the value for Base of a Triangle. ");
scanf("%f", &base);
printf("\n\n\t\t Enter the value for Radius of a Sphere. ");
scanf("%f", &radius);
t=(1.0/2.0)*(altitude*base);
s=(4.0/3.0)*pi*pow(radius,3);
if(t<s)
{
printf("\n\n\t\t Area of Triangle = %.2f",t);
printf("\n\n\t\t Volume of Sphere = %.2f",s);
}
else
{
printf("\n\n\t\t Volume of Sphere = %.2f",s);
printf("\n\n\t\t Area of Triangle = %.2f",t);
}
return 0;
}
