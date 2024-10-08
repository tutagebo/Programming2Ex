#include <iostream>

double getTrapezoid(double a, double b, double h);

int prog2_12() {
    double a, b, h;
    printf("<上底 下底 高さ>で入力:");
    scanf_s("%lf %lf %lf",&a,&b,&h);
    double result = getTrapezoid(a, b, h);
    if (result == -1)printf("不正な入力です");
    else printf("台形の面積は %5.1f", result);
    return 0;
}

double getTrapezoid(double a, double b, double h) {
    if (a < 0 || b < 0 || h < 0)return -1;
    return (a + b) * h / 2;
}