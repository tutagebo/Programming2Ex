#include <iostream>
#define N 5

typedef enum {
    A,O,B,AB
} Blood_t;

int prog12_11() {
    int bloodrate[] = {40,30,20,10};
    Blood_t blood;
    printf("A..0, O..1, B..2, AB..3\n整数を入力");
    scanf_s("%d", &blood);
    switch (blood) {
        case A: {
            printf("A型の割合は%d%%です。", bloodrate[A]);
            break;
        }
        case O: {
            printf("O型の割合は%d%%です。", bloodrate[O]);
            break;
        }
        case B: {
            printf("B型の割合は%d%%です。", bloodrate[B]);
            break;
        }
        case AB: {
            printf("AB型の割合は%d%%です。", bloodrate[AB]);
            break;
        }
        default: {
            printf("わかりません");
            break;
        }
    }
    return 0;
}
