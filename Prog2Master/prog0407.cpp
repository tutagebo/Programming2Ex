#include <iostream>

int getFact(int x);

int prog4_7() {
    int a;
    scanf_s("%d", &a);
    int res = getFact(a);
    if (res == -1)printf("不正な入力です");
    else printf("%d", getFact(a));
    return 0;
}
