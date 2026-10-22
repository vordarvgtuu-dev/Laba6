# Лабораторная работа № 6
## 1. Условие задачи, 6 Вариант
Дано целое число k, определить каким днем недели является k-й день не високосного года, в котором 1 января приходиться на заданный заранее день недели.

## 2. Реализация программы
```
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h> // не работает #include <locale.h>

int has_five(int n);

int main() {
    int n;
    SetConsoleOutputCP(65001); 

    printf("ЗАДАЧА 3: Проверка наличия цифры 5\nВведите число N (N < 1000):\n");
    if (scanf("%d", &n) != 1) {
        printf("Ошибка ввода чисел.\n");
        return 1;
    }

    int five_result = has_five(n);
    if (five_result == 1) {
        printf("В числе %d есть цифра 5!\n", n);
    } else {
        printf("В числе %d нет цифры 5.....\n", n);
    }
    return 0;
}

int has_five(int n) {
    int temp = n;

    if (temp < 0) {
        temp = -temp;
    }

    while (temp > 0) {
        if (temp % 10 == 5) {
            return 1; 
        }
        temp = temp / 10;
    }
    return 0; 
}

```

## 3. Результаты работы программы

ЗАДАЧА 3: Проверка наличия цифры 5
Введите число N (N < 1000):
675
В числе 675 есть цифра 5!

## 4. Информация о разработчике

 Воропаева Дарья БИД-261
