#include <stdio.h>

int main(void)
{
    int A, B, V, day = 0;

    scanf("%d %d %d", &A, &B, &V);

    // +1�� �������� ���� �ö󰡴� ����
    // �� ��(V - A)���� ����ϱ� ������ �����ش�
    day = (V - A) / (A - B) + 1;
    if ((V - A) % (A - B) != 0)
        day++;

    printf("%d\n", day);

    return 0;
}