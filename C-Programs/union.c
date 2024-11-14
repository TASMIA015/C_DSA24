#include <stdio.h>
#include <math.h>

union distance
{
    int x1, x2, y1, y2;
    double dist;
};

void calc() {
    union distance a;
    
    // Store values of x1, x2, y1, and y2 separately in different variables
    int x1 = 10, x2 = 20, y1 = 20, y2 = 10;
    
    // Calculate distance 
    a.dist = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    
    // Print the distance
    printf("Distance: %.2f\n", a.dist);
}

int main()
{
    calc();
    return 0;
}
