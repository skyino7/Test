#include <stdio.h>

int get_area(int n)
{
    return n*n; //returns the square area
}

float get_area2(int r)
{
    return 3.14 * r * r; //returns the radius of the circle
}

int main(void)
{
    int n;
    int area_square;
    float area_circle;

    printf("Enter Data: ");
    scanf("%d", &n);

    area_square = get_area(n);
    area_circle = get_area2(n);

    printf("Area of Square: %d\n", area_square);
    printf("Area of Circle: %2.f\n", area_circle);

    return (0);

}