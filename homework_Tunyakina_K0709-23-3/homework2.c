#include <stdio.h>
#include <stdlib.h>

void task1();
void task2();
void task3();
void task4();
void task5();
void task6();
void task7();
void task8();
void task9();
void task10();

int main() {
    printf("Домашнее задание №2 Тюнякиной Ксении, группа К0709-23/3\n");
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
        else if (number == 6) {
            task6();
        }
        else if (number == 7) {
            task7();
        }
        else if (number == 8) {
            task8();
        }
        else if (number == 9) {
            task9();
        }
        else if (number == 10) {
            task10();
        } else if (number == 0) {
            break;
        }
        else {
            printf("%s", "Такой задачи нет\n");
        }
    }
}


// №1
// Создайте структуру Student, которая будет хранить информацию о студенте: 
// имя (строка), возраст (целое число), средний балл (вещественное число). 
// Напишите программу, которая будет принимать ввод данных для нескольких студентов 
// и выводить их на экран в формате: ... .
struct Student {
    char name[50];
    int age;
    float gpa;
};

void task1() {
    int n;
    printf("Введите количество студентов: ");
    scanf("%d", &n);
    struct Student *stlist = (struct Student*) malloc(sizeof(struct Student) * n);
    
    for (int i = 0; i < n; i++) {
        struct Student student;
        printf("Введите имя, возраст, средний балл (через пробел): ");
        scanf("%s%d%f", stlist[i].name, &stlist[i].age, &stlist[i].gpa);
    }

    for (int i = 0; i < n; i++) {
        printf("Name: %s\nAge: %d\nGPA: %.2lf\n", stlist[i].name, stlist[i].age, stlist[i].gpa);
    }
    free(stlist);
}

// №2
// Создайте структуру Item, которая будет хранить информацию о товаре: 
// название (строка), количество (целое число), цена (вещественное число). 
// Напишите программу, которая будет принимать информацию о нескольких товарах, 
// а затем выводить отчет о всех товарах.
struct Item {
    char name[50];
    int quantity;
    float price;
};

void task2() {
    int n;
    printf("Введите количество товаров: ");
    scanf("%d", &n);
    struct Item *items = (struct Item*) malloc(sizeof(struct Item) * n);

    for (int i = 0; i < n; i++) {
        struct Item item;
        printf("Введите название, количество, цену (через пробел): ");
        scanf("%s%d%f", items[i].name, &items[i].quantity, &items[i].price);
    }

    for (int i = 0; i < n; i++) {
        printf("Item: %s\nQuantity: %d\nPrice: %.2lf\n", items[i].name, items[i].quantity, items[i].price);
    }
    free(items);
}


void task3() {}
void task4() {}
void task5() {}
void task6() {}
void task7() {}
void task8() {}
void task9() {}
void task10() {}