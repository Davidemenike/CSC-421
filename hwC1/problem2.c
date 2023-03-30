#include <stdio.h>


int main(){
    
    int i;
    double total;
    double numbers[5] = {5,8,10,13,19};


    for (i = 0; i < 5; i++)
    {
        total = total + numbers[i];
    }
    printf("The array is [%f, %f, %f, %f, %f]\n", numbers[0], numbers[1], numbers[2], numbers[3], numbers[4]);
    printf("The sum of the array is %f\n", total);
}