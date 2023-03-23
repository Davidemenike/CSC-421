#include <stdio.h>

int main(){
    int height = 5;
    int width  = 3;
    int area = height * width;
    int perimeter = 2 * (height + width);
    printf("Perimeter of the rectangle = %d\n", perimeter);
    printf("Area of the rectangle = %d\n", area);
    return 0;
}