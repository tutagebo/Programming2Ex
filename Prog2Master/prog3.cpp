#include <iostream>

int prog3() {
    int a = 10;
    double b = 3.5;
    int c = a - b;
    double d = a * c;
    printf("%g\n", d);
    return 0;
}

/*
    cは通常の計算だと6.5になるはずではあるが、int型で宣言されている
    ので小数点以下が切り捨てされるので6が代入されてdが
    10×6で60となる
*/