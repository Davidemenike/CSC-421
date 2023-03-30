#include <stdio.h>


int main(){
    int i;
    double arr[6] = {0};
    printf("------------------------\n");
    printf("Enter the first array's values\n");
    printf("------------------------\n");

    printf("Enter a number: ");
    scanf("%lf", &arr[0]); 
    printf("Enter a number: ");
    scanf("%lf", &arr[1]);
    printf("Enter a number: ");
    scanf("%lf", &arr[2]);

    // I was gonna make a for loop here that goes through 0-2 in the array and then stops and then goes through 3-5 and 
    // ends but i couldnt figure it out and just when classic
    puts("--------------------------------");
    puts("Enter the second array's values");
    puts("--------------------------------");


    printf("Enter a number: ");
    scanf("%lf", &arr[3]); 
    printf("Enter a number: ");
    scanf("%lf", &arr[4]);
    printf("Enter a number: ");
    scanf("%lf", &arr[5]);
    printf("The merged array is [%.2f, %.2f, %.2f, %.2f, %.2f, %.2f].\n", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5]);
}



