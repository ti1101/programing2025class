#include <stdio.h>
#pragma warning(disable:4996) 

int main() {
    double V, D = 0.05, rho = 998.2, mu = 0.001002;
    double Re, q;

    printf("유속 V (m/s): ");
    scanf("%lf", &V);

    if (V < 0) {
        printf("Invalid input\n");
        return 0;
    }

    Re = (rho * V * D) / mu;
    q = 0.5 * rho * V * V;

    printf("Reynolds 수 = %.2f\n", Re);

    if (Re < 2300)
        printf("유동 상태: 층류\n");
    else if (Re <= 4000)
        printf("유동 상태: 천이\n");
    else
        printf("유동 상태: 난류\n");

    printf("동압 q = %.3f Pa\n", q);

    return 0;
}
