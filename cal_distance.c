#include <stdio.h>
#include <math.h>


double cal_distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow((x2 -x1), 2) + pow((y2 - y1), 2));
}

int main(void) {
    double x1, y1;
    double x2, y2;

    printf("input two cordinates\n");
    printf("x1 = "); scanf("%lf", &x1); 
    printf("y1 = "); scanf("%lf", &y1);
    printf("x2 = "); scanf("%lf", &x2); 
    printf("y2 = "); scanf("%lf", &y2);
    printf("Distance = %lf", cal_distance(x1, y1, x2, y2));
}