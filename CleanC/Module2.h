#pragma once
#include <math.h>
#include <stdio.h>


double func1(double x) {
    return pow((0.5 * pow(sin(x), 3) + pow(cos(x), 2)), 0.25);
}

double func2(double x) {
    return pow(x * x / (x - 5), 2.0 / 3.0)/ log(fabs(1 - x));
}

double func3(double x) {
    const double  e = 2.71828;
    return pow(2 * pow(e,x), 2 * x / 5) / 5;
}

double func4(double x) {
    double expression = 1 + (3 / 2) * sqrt(x) + 2 * x;
    double absoluteValue = fabs(expression);
    return sqrt(1 / absoluteValue);
}
void  ConditionalModul2() {
    while (true) {
        int choice;
        double x;

        printf("Выберите функцию (1, 2, 3, или 4): ");
        printf("1 - (1/2*sin^3(x)+cons^2(x))^1/4\n");
        printf("2 - ((x^2/x-5)^2/3 )/ln(|1-x|)\n");
        printf("3 - ((2*e)^(2x/5)) /5\n");
        printf("4 - sqrt(1/|1+3/2*sqrt(x)+2*x|)\n");
        printf("0 - Выход\n ");
        scanf_s("%d", &choice);

        if (choice == 0) return;

        printf("Введите значение параметра x: ");
        scanf_s("%lf", &x);

        double result;

        switch (choice) {
        case 1:
            result = func1(x);
            break;
        case 2:
            result = func2(x);
            break;
        case 3:
            result = func3(x);
            break;
        case 4:
            result = func4(x);
            break;
        default:
            printf("неверный выбор функции.\n");
        }

        printf("Значение функции: %lf\n", result);
    }

}