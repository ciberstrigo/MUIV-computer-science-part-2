#include <stdio.h>
#include <math.h>

double dotdist(double x1, double y1, double x2, double y2)
{
    return sqrt( pow(x2 - x1, 2) + pow(y2 - y1, 2) );
}

main() 
{
    double x1, x2, x3, y1, y2, y3, p, s, a, b, c, out;

    /*1st coordinates*/
    printf("Input x1: ");
    scanf("%lf", &x1);
    printf("Input y1: ");
    scanf("%lf", &y1); 

    /*2st coordinates*/
    printf("Input x2: ");
    scanf("%lf", &x2);
    printf("Input y2: ");
    scanf("%lf", &y2); 

    /*3rd coordinates*/
    printf("Input x3: ");
    scanf("%lf", &x3);
    printf("Input y3: ");
    scanf("%lf", &y3); 

    a = dotdist(x1, y1, x2, y2);
    b = dotdist(x2, y2, x3, y3);
    c = dotdist(x3, y3, x1, y1);

    p = (a + b + c) / 2;

    s = sqrt( p * (p - a) * (p - b) * (p - c) );

    printf("Result: %lf\n", s);
}

