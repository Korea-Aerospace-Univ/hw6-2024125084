#include <stdio.h>

int main(void)
{
    /* 1.입력받을 배열과 포인터 선언 */
    char arr[10];
    char *p, *q;

    /* 2.문자와 빈도수를 저장할 변수 선언 */
    char answer;
    int max_count = 0;

    /* 3.문자 10개 입력 */
    for (p = arr; p < arr + 10; p++)
        scanf(" %c", p);

    /* 4.조사할 문자 선택 */
    for (p = arr; p < arr + 10; p++) {
        int count = 0;

    /* 5.같은 문자 세기 */
        for (q = arr; q < arr + 10; q++) {
            if (*p == *q)
                count++;
        }

        /* 6. 기존 최댓값보다 크면 문자 변경,
              빈도수가 같으면 앞선 문자 유지 */
        if (count > max_count) {
            max_count = count;
            answer = *p;
        }
    }

    /* 7. 가장 많이 등장한 문자와 빈도수 출력 */
    printf("%c %d", answer, max_count);

    return 0;
}
