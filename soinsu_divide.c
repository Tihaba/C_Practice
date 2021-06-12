#include <stdio.h>
#pragma warning (disable:4996)
#pragma warning (disable:6031)
int prime(int b)
{
    for (int i = 2; i <= b / 2; i++)
    {
        if (b % i == 0)
        {
            return i;
        }
    }
    return b;
}

int main(void)
{
    int a; int c; int b[100] = { 0 };
    printf("소인수 분해할 정수 입력: ");
    scanf(" %d", &c);
    printf("%d = ", c);
    for (int i = 0; i < c; i++)
    {

        b[i] = prime(c);
        if (c == b[i])
        {
            a = i;
            break;
        }
        else
            c /= b[i];

    }
    for (int i = 0; i <= a; i++)
    {
        printf("%d ", b[i]);
        if (i != a)
            printf("* ");
    }

}