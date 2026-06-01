#include <stdio.h>

int main(void)
{
    /* 1. 입력받을 정수 개수와 두 배열 선언 */
    int n;
    int a[20], b[20];
    int *p, *q;
    /* 2. 배열에 저장할 정수의 개수 입력 */
    scanf("%d", &n);
    /* 3. 포인터를 이동시키며 첫 번째 배열 입력 */
    for (p = a; p < a + n; p++)
        scanf("%d", p);
    /* 4.두 번째 배열 입력 */
    for (q = b; q < b + n; q++)
        scanf("%d", q);
    /* 5. 첫 번째 배열은 앞, 두 번째 배열은 뒤에서 시작 */
    p = a;
    q = b + n - 1;
    /* 6. 두 포인터를 반대 방향으로 이동시키며 합계 출력 */
    while (p < a + n){
        printf(" %d", *p + *q);
        p++;
        q--;

    }

    return 0;
}
