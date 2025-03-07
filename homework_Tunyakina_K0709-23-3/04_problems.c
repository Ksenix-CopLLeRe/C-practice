#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void task1();
void task2();
void task3();
void task4();
void task5();

int main() {
    printf("Задачи со строками и указателями на функции Тюнякиной Ксении, группа К0709-23/3\n");
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

// №1
struct Command {
    char *name;
    void (*command_fun)(void);
};

void command_upper() {
    char string[100];
    printf("Введите строку: ");
    scanf(" %[^\n]", string);
    for (int i = 0; i < strlen(string); i++) {
        string[i] = toupper(string[i]);
    }
    printf("Результат: %s\n", string);
}
void command_lower() {
    char string[100];
    printf("Введите строку: ");
    scanf(" %[^\n]", string);
    for (int i = 0; i < strlen(string); i++) {
        string[i] = tolower(string[i]);
    }
    printf("Результат: %s\n", string);
}
void command_reverse() {
    char string[100];
    printf("Введите строку: ");
    scanf(" %[^\n]", string);

    int length = strlen(string);
    for (int i = 0; i < length / 2; i++) {
        char a = string[i];
        string[i] = string[length - i - 1];
        string[length - i - 1] = a;
    }
    printf("Результат: %s\n", string);
}
void command_exit() {
    printf("Программа завершена.\n");
}

void task1() {
    struct Command commands[] = {
        {"upper", command_upper},
        {"lower", command_lower},
        {"reverse", command_reverse},
        {"exit", command_exit}
    };

    char input_command[10];
    printf("Введите команду (upper, lower, reverse, exit): \n");
    scanf("%s", input_command);

    for (int i = 0; i < 4; i++) {
        if (strcmp(input_command, commands[i].name) == 0) {
            commands[i].command_fun();
        } 
    }
}


void task2() {}
void task3() {}
void task4() {}
void task5() {}