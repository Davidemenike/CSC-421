#include<stdio.h>

int main()
{

    double arr[3] = {0};
    double avg;
    int i;
    
    
    
    printf("Enter array elements\n");
    for(i = 0; i < 3; i++)
    {
          scanf("%lf",&arr[i]);
    }     
    avg = (arr[0] + arr[1] + arr[2])/3;

    printf("The array is [%f, %f, %f]\n", arr[0], arr[1], arr[2]);
    printf("The average of the array is %f\n", avg);


}