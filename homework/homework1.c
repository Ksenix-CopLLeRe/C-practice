#include <stdio.h>

void task1();
void task2();
void task3();
void task4();
void task5();
void task6();
void task7();
void task8();

int main() {
    int number;
    printf("%s", "Введите номер задачи: ");
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
    else if (number == 6) {
        task6();
    }
    else if (number == 7) {
        task7();
    }
    else if (number == 8) {
        task8();
    }
    else {
        printf("%s", "Такой задачи нет\n");
    }
}

// №1
// Минимальный вес для полета
// Космический челнок "Буран" принимает на борт только космонавтов с массой тела от 60 до 90 кг. 
// Напишите программу, которая запрашивает у пользователя его массу и сообщает, может ли он пройти отбор.
// Используйте int для хранения массы.

void task1() {
    int weight;
    printf("Введите ваш вес: ");
    scanf("%d", &weight);

    if (weight >= 60 && weight <= 90) {
        printf("Поздравляю, Вы приняты на борт!");
    }   else {
        printf("Сорян, Вы не подходите(");
    }
}

void task2() {}

void task3() {}

void task4() {}

void task5() {}

void task6() {}

void task7() {}

void task8() {}
