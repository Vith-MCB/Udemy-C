#include <stdio.h>

/*
 * In this challenge, it will be created a C program that displays the perimeter and area of a rectangle
 */
int main(){
    float width, height;
    float area, perimeter;

    //Reading form user the rectangle Height
    printf("Rectangle Height:\n");
    scanf("%f",&height);

    //Reading form user the rectangle Width
    printf("Rectangle Width:\n");
    scanf("%f",&width);

    //Calculating the area and the perimeter
    area = width * height;
    perimeter = (height*2)+(width*2);

    //Printing the output
    printf("\nThe area of the rectangle is: %.2f\n", area);
    printf("The perimeter of the rectangle is: %.2f\n", perimeter);
}