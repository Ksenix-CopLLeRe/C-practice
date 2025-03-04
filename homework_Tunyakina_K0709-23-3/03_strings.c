#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void task1();
void task2();
void task3();
void task4();
void task5();

int main() {
    printf("Домашнее задание №5 Тюнякиной Ксении, группа К0709-23/3\n");
    printf("Чтобы завершить проверку, введите 0.\n");
    int number = 1;
    while (number != 0) {
        printf("%s", "\nВведите номер задачи (чтобы завершить введите 0): ");
        scanf("%d", &number);
        if (number == 1) {
            task1();
        }
        else if (number == 2) {
            task2();
        }
        else if (number == 3) {
            task3();
        }
        else if (number == 4) {
            task4();
        }
        else if (number == 5) {
            task5();
        }
        else if (number == 0) {
            break;
        }
        else {
            printf("%s", "Такой задачи нет\n");
        }
    }
}

void task1() {}

// ???
void task2() {
    char signal[101];
    printf("Введите зашифрованное сообщение: ");
    scanf("%100s", signal);

    size_t start = strspn(signal, "#*");
    size_t end = strlen(signal) - strcspn(signal + start, "#*");
    size_t length = end - start;
    char *messsage = strndup(signal + start, length);

    printf("Очищенное сообщение: %s\n", messsage);
    printf("Длина сообщения: %zu\n", length);

    free(messsage);
}

void task3() {
    char crew[101];
    printf("Введите список космонавтов: ");
    scanf("%100s", crew);

    char *token = strtok(crew, ";");
    while (token) {
        printf("%s\n", token);
        token = strtok(NULL, ";");
    }
}

void task4() {}

void task5() {
    char report[200];

    printf("Введите текст отчета: ");
    scanf(" %[^\n]", report);

    char *copy = strdup(report);

    printf("Оригинал: %s\n", report);
    printf("Копия: %s\n", copy);

    free(copy);
}