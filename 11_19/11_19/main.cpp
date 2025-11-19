#include <stdio.h>

void calc_line(double* ptA, double* ptB, double* outSlope, double* outBias) {

    double ax = ptA[0];
    double ay = ptA[1];
    double bx = ptB[0];
    double by = ptB[1];

    *outSlope = (by - ay) / (bx - ax);
    *outBias = ay - (*outSlope) * ax;
}

int main() {

    double firstPoint[2];
    double secondPoint[2];

    double lineSlope, lineBias;

    printf("Input 1st point information:\n");
    scanf_s("%lf %lf", &firstPoint[0], &firstPoint[1]);

    printf("\nInput 2nd point information:\n");
    scanf_s("%lf %lf", &secondPoint[0], &secondPoint[1]);

    calc_line(firstPoint, secondPoint, &lineSlope, &lineBias);

    printf("\nCalculated Output, line equation:\n");
    printf("slope: %.4lf\n", lineSlope);
    printf("bias: %.4lf\n", lineBias);

    return 0;
}
