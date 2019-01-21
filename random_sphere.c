#include <stdio.h>
#include <stdlib.h>
#include <math.h>


// 経度
double cal_latitude(double z){
    double res = acos(z) * 180 / M_PI;
    if (res < 0) res = 360.0 + res;
    return res - 180;
}

// 緯度
double cal_longitude(double x, double y){
    double res;
    if (y == 0.0) {
        res = 0;
    } else {
        res = atan(y / x) * 180 / M_PI;
    }
    if (res < 0) res = 360.0 + res;

    if (res >= 180) {
        return res - 270;
    } else {
        return  -(res - 90);
    } 
}

double limited_rand(){
    double temp;
    do {
        temp = ((double)random() / (double)RAND_MAX) * 2 - 1;
    } while (temp < -1.0 || 1.0 < temp);  
    return temp;
}

void sphere_rand(double *x, double *y, double *z) {
    double x1, x2, s;
    do {
        x1 = limited_rand();
        x2 = limited_rand();
        s = x1 * x1 + x2 * x2;
    } while (s >= 1.0);

    double temp = 2.0 * sqrt(1.0 - s) ? s < 1.0 : 0;
    *x = x1 * temp;
    *y = x2 * temp;
    *z = 1.0 - 2.0 * s;
}


void random_sphere(int num)
{
    // calcurate `num` numbers of cordinates 
    double tX, tY, tZ;
    double cordinates[num][3];
    for (int i = 0; i < num; i++) {
        sphere_rand(&tX, &tY, &tZ);
        cordinates[i][0] = tX;
        cordinates[i][1] = tY;
        cordinates[i][2] = tZ;
        // printf("(%f, %f, %f)\n", tX, tY, tZ);
        printf("%f %f,", cal_latitude(tZ), cal_longitude(tX, tY));
    }
}

int main (void){
    int num;
    printf("Please input data size: ");
    scanf("%d", &num);
    random_sphere(num);
}