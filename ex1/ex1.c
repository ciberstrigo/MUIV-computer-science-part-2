#include <stdio.h>
#include <math.h> 


double dotdist(double x1, double y1, double x2, double y2)
{
    return sqrt( pow(x2 - x1, 2) + pow(y2 - y1, 2) );
}

main() 
{
    double x1, x2, y1, y2, out;

    /*1st coordinates*/
    printf("Input first x: ");
    scanf("%lf", &x1);
    printf("Input first y: ");
    scanf("%lf", &y1); 

    /*2st coordinates*/
    printf("Input second x: ");
    scanf("%lf", &x2);
    printf("Input second y: ");
    scanf("%lf", &y2); 

    out = dotdist(x1, y1, x2, y2);
    printf("Result: %lf\n", out);
}

