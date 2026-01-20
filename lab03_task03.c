// Program to find factorial of a given number.
#include<stdio.h>
int main()
{
    int num;
           
    while(1)
    {
        printf("\nEnter number to find its factorial (0 to exit): ");
        scanf("%d", &num);
        if (num == 0){
            break;
        }
        int f = 1;
        for(int i = num; i > 1; i--)
        {
            f = f * i;
        }
        printf("Factorial of %d is %d\n", num, f);
    }
    return 0;
}
