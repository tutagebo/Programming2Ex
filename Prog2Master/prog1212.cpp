#include <iostream>
#define N 5

typedef enum {
    Sun, Mon, Tue, Wed, Thu, Fri, Sat
} Week_t;

typedef struct {
    int time;
    char Subject[51];
} RequiredSubjects_t;

int prog12_12() {
    RequiredSubjects_t requiredsubjects[] = {
        { 0, "なし"},
        { 3, "プログラミング言語・演習�U"},
        { 4, "計算機構成"},
        { 0, "なし"},
        { 3, "統計学演習"},
        { 0, "なし"},
        { 0, "なし"},
    };
    Week_t week;
    printf("必修科目を調べます。曜日の番号を入力\nSun..0, Mon..1, Tue..2, Wed..3, Thu..4, Fri..5, Sat..6\n");
    scanf_s("%d", &week);
    switch (week) {
        case Sun: {
            printf("日曜日の必修科目は%d限で%s\n", requiredsubjects[Sun].time, requiredsubjects[Sun].Subject);
            break;
        }
        case Mon: {
            printf("月曜日の必修科目は%d限で%s\n", requiredsubjects[Mon].time, requiredsubjects[Mon].Subject);
            break;
        }
        case Tue: {
            printf("火曜日の必修科目は%d限で%s\n", requiredsubjects[Tue].time, requiredsubjects[Tue].Subject);
            break;
        }
        case Wed: {
            printf("水曜日の必修科目は%d限で%s\n", requiredsubjects[Wed].time, requiredsubjects[Wed].Subject);
            break;
        }
        case Thu: {
            printf("木曜日の必修科目は%d限で%s\n", requiredsubjects[Thu].time, requiredsubjects[Thu].Subject);
            break;
        }
        case Fri: {
            printf("金曜日の必修科目は%d限で%s\n", requiredsubjects[Fri].time, requiredsubjects[Fri].Subject);
            break;
        }
        case Sat: {
            printf("土曜日の必修科目は%d限で%s\n", requiredsubjects[Sun].time, requiredsubjects[Sun].Subject);
            break;
        }

    }
    return 0;
}
