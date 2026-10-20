#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h> // не работает #include <locale.h>

int is_leap_year(int year);
double calculate_function(double x);
int has_digit_five(int n);

int main() {
    SetConsoleOutputCP(65001);
    int year, n;
    double x;

    //  Задание 1 
    printf("ЗАДАЧА 1: Високосный год\nВведите год: ");
    scanf("%d", &year);
    if (is_leap_year(year)) {
        printf("Год %d високосный\n\n", year);
    }
    else {
        printf("Год %d не високосный\n\n", year);
    }

    //  Задание 2 
    printf("ЗАДАЧА 2: Вычисление функции F(x)\nВведите значение x: ");
    scanf("%lf", &x);

    printf("F(%.2lf) = %.4lf\n\n", x, calculate_function(x));

    //  Задание 3 Вариант 6
    printf("ЗАДАЧА 3: Проверка наличия цифры 5\nВведите число N (N < 1000): ");
    scanf("%d", &n);
    if (has_digit_five(n)) {
        printf("В числе %d есть цифра 5.\n", n);
    }
    else {
        printf("В числе %d нет цифры 5.\n", n);
    }

    return 0;
}


//  Задание 1 
int is_leap_year(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1;
    }
    else {
        return 0;
    }
}

//  Задание 2
double calculate_function(double x) {
    return (x <= 7) ? (3.0 * x - 9.0) : (1.0 / (x * x - 4.0));
}

//  Задание 3
int has_digit_five(int n) {
    int temp = n;
    if (temp < 0) temp = -temp;

    while (temp > 0) {
        if (temp % 10 == 5) {
            return 1;
        }
        temp /= 10;
    }
    return 0;
}