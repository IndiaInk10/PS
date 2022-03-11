#include <stdio.h>

int main(void)
{
    int A, B, V, day = 0;

    scanf("%d %d %d", &A, &B, &V);

    // +1은 마지막에 낮에 올라가는 것을
    // 뺀 것(V - A)에서 계산하기 때문에 더해준다
    day = (V - A) / (A - B) + 1;
    if ((V - A) % (A - B) != 0)
        day++;

    printf("%d\n", day);

    return 0;
}