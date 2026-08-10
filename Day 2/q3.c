#include <stdio.h>
int main() {
    float length, width, area, perimeter;

    printf("enter the length of the rectangle:");
    scanf("%f",&length);
    printf("enter the width of the rectangle:");
    scanf("%f",&width);
    area=length*width;
    perimeter=2*(length+width);

    printf("area of rectangle is: %.2f\n",area);
    printf("perimeter of rectangle is: %.2f\n",perimeter);
    return 0;
}