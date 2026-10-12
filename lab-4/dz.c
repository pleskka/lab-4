#include <stdio.h>
#include <locale.h>

int dz(int A, int B, int C);

int main()
{
    setlocale(LC_ALL, "Ru");
    printf("Домашняя работа\n");

    int A, B, C;
    printf("Введите три экспериментальных числа (A, B, C): ");
    scanf("%d %d %d", &A, &B, &C);
    int result = dz(A, B, C);
    printf("Гипотеза подтверждена (1 - да, 0 - нет): %d\n", result);

    return 0;
}


int dz(int A, int B, int C)
{
    int check = (A % 3 == 0) && (B % 3 == 0) && (C % 3 == 0);
    return check;
}
