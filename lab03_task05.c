// Write a program to print sum of even numbers from 1 to 100.

 #include <stdio.h>
int main() {
    int sum = 0;
          
    for(int i = 1; i <= 100; i++) {
        if(i % 2 == 0) {   // check if even
            sum = sum + i;
        }
    }
    printf("Sum of even numbers from 1 to 100 = %d", sum);
    return 0;
}
