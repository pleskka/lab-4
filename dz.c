//вариант 18
#include <stdio.h>
#include <math.h>

double funk(double x, double y)
{
    double a = 7.1e-9;

    double top = cos(pow(x, 3) + 6) - sin(y - a);
    double bottom = log(pow(x, 4)) - 2 * pow(sin(x)), 5);

    return top / bottom;
}

int main()
{
    double r1 = funk(100.0, -0.5);
    printf("Ответ 1: %f (~0.069295)\n", r1);

    double r2 = funk(3.7e-5, 5.0);
    printf("Ответ 2: %f (~-0.047015)\n", r2);

    return 0;
}