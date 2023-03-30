#include <stdio.h>
int main() {    

    int number1, sum;
    
    printf("Enter one integers: ");
    scanf("%d", &number1);

    // calculate the sum
    sum = number1 + 5;      
    
    printf("Output : %d", sum);
    return 0;
}