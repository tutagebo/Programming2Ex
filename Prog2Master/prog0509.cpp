#include <iostream>

int isDigit(char c);

int prog5_9() {
    char c = getchar();
    if (isDigit(c))putchar(c);
    else printf("数字ではありません");
    return 0;
}

int isDigit(char c) {
    return '0' <= c && c <= '9';
}
