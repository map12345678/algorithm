#include <stdio.h>

int main()
{
    int num1, num2, num3;
    scanf("%d %d", &num1, &num2);

    printf("%d\n", num1 * (num2 % 10));
    printf("%d\n", num1 * (num2 % 100 / 10));
    printf("%d\n", num1 * (num2 / 100));
    printf("%d", num1 * num2);
}