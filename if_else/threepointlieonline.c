#include <stdio.h>

int main() {
    float x1, y1, x2, y2, x3, y3;
    float slope1, slope2;
    
    // Input the coordinates of the three points
    printf("Enter the coordinates of the first point (x1, y1) : ");
    scanf("%f %f", &x1, &y1);
    
    printf("Enter the coordinates of the second point (x2, y2) : ");
    scanf("%f %f", &x2, &y2);
    
    printf("Enter the coordinates of the third point (x3, y3) : ");
    scanf("%f %f", &x3, &y3);
    
    // Calculate the slopes between the first two points and second two points
    slope1 = (y2 - y1) / (x2 - x1);
    slope2 = (y3 - y2) / (x3 - x2);
    
    // Check if the slopes are equal (points are collinear)
    if (slope1 == slope2) {
        printf("The three points are collinear.\n");
    } else {
        printf("The three points are not collinear.\n");
    }
    
    return 0;
}