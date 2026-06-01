#include <stdio.h>

int main(void)
{

    int n;
    int a[20], b[]
    int *p, *q;

    scanf("%d," &n);
    
    for (p = a; p < a + n; p++)
        scanf("%d", p);

    for (q = b; q < b + n; q++)
        scanf("%d", q);

    p = a;
    q = b + n - 1;

    while (p < a + n){
        printf(" %d", *p + *q);
        p++;
        q--;

    }

    return 0;
}
