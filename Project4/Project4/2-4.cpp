#include <stdio.h>
#pragma warning(disable:4996) 

int main() {
    double V, D = 0.05, rho = 998.2, mu = 0.001002;
    double Re, q;

    printf("���� V (m/s): ");
    scanf("%lf", &V);

    if (V < 0) {
        printf("Invalid input\n");
        return 0;
    }

    Re = (rho * V * D) / mu;
    q = 0.5 * rho * V * V;

    printf("Reynolds �� = %.2f\n", Re);

    if (Re < 2300)
        printf("���� ����: ����\n");
    else if (Re <= 4000)
        printf("���� ����: õ��\n");
    else
        printf("���� ����: ����\n");

    printf("���� q = %.3f Pa\n", q);

    return 0;
}
