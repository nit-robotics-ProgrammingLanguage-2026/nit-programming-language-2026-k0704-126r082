
#include <stdio.h>

int calculate_total(int value)
{
    // static変数は関数の呼び出し後も値を保持する。
    static int total = 0;

    total = total + value;

    return total;
}

int main(void)
{
    int number;
    int result = 0;
    int count;

    scanf("%d", &number);

    if (number < 1 || number > 10)
    {
        printf("NG");
        return 0;
    }

    // 1から入力値までの数を2回ずつ加算する。
    for (count = 1; count <= number; count++)
    {
        calculate_total(count);
        result = calculate_total(count);
    }

    printf("%d", result);

    return 0;
}
