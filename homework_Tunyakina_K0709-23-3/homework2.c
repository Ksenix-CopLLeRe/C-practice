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
        printf("Введите имя, возраст, средний балл: ");
        scanf("%s%d%f", stlist[i].name, &stlist[i].age, &stlist[i].gpa);
    }

    for (int i = 0; i < n; i++) {
        printf("\nName: %s\nAge: %d\nGPA: %.2lf\n", stlist[i].name, stlist[i].age, stlist[i].gpa);
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
        printf("Введите название, количество, цену: ");
        scanf("%s%d%f", items[i].name, &items[i].quantity, &items[i].price);
    }

    for (int i = 0; i < n; i++) {
        printf("\nItem: %s\nQuantity: %d\nPrice: %.2lf\n", items[i].name, items[i].quantity, items[i].price);
    }
    free(items);
}


// №3
// Создайте структуру Event, которая будет хранить информацию о событии: 
// название события (строка), дата (структура с полями день, месяц, год), описание (строка). 
// Напишите программу, которая будет принимать несколько событий и выводить их в формате... .
struct Date {
    int day;
    int month;
    int year;
};

struct Event {
    char name[50];           
    struct Date eventDate;                  
    char description[50]; 
};
void task3() {
    int n;
    printf("Введите количество событий: ");
    scanf("%d", &n);
    struct Event *events = (struct Event*) malloc(sizeof(struct Event) * n);

    for (int i = 0; i < n; i++) {
        printf("Введите название события, дату (ДД ММ ГГГГ), описание: ");
        scanf("%s%d%d%d%s", events[i].name, &events[i].eventDate.day, 
              &events[i].eventDate.month, &events[i].eventDate.year, events[i].description);
    }

    for (int i = 0; i < n; i++) {
        printf("\nEvent: %s\nDate: %d/%d/%d\nDescription: %s\n", events[i].name, 
               events[i].eventDate.day, events[i].eventDate.month, events[i].eventDate.year, 
               events[i].description);
    }

    free(events);
}


// №4
// Создайте структуру Employee, которая будет хранить информацию о сотруднике: 
// имя (строка), должность (строка), зарплата (вещественное число). 
// Напишите программу, которая принимает информацию о нескольких сотрудниках, 
// а затем выводит отчет по зарплатам.
struct Employee {
    char name[50];
    char position[50];
    float salary;
};

void task4() {
    int n;
    printf("Введите количество сотрудников: ");
    scanf("%d", &n);
    struct Employee *employees = (struct Employee*) malloc(sizeof(struct Employee) * n);

    for (int i = 0; i < n; i++) {
        struct Employee empl;
        printf("Введите имя, должность, зарплату: ");
        scanf("%s%s%f", employees[i].name, employees[i].position, &employees[i].salary);
    }

    for (int i = 0; i < n; i++) {
        printf("\nName: %s\nPosition: %s\nSalary: %.2lf\n", 
               employees[i].name, employees[i].position, employees[i].salary);
    }
    free(employees);
}


// №5
union Data {
    int integer;
    float flt;
    char string[50];

};

void task5() {
    int type;
    printf("Выберите тип данных\n(1 - целое число, 2 - вещественное число, 3 - строка): ");
    scanf("%d", &type);
    union Data data;

    printf("Введиите данные: ");
    if (type == 1) {
        scanf("%d", &data.integer);
        printf("Integer: %d\n", data.integer);
    } else if (type == 2) {
        scanf("%f", &data.flt);
        printf("Float: %f\n", data.flt);
    } else if (type == 3) {
        scanf("%s", data.string);
        printf("String: %s\n", data.string);
    } else {
        printf("Выбран неверный тип данных.\n");
    }
}

// №6
enum typeOfEngine {Gasoline, Diesel, Electric};

struct Vehicle {
    char brand[20];
    char model[20];
    int year;
    enum typeOfEngine engine;
};

void task6() {
    int n;
    printf("Введите количество транспортных средств: ");
    scanf("%d", &n);
    struct Vehicle *vehicle = (struct Vehicle*) malloc(sizeof(struct Vehicle) * n);

}


void task7() {}
void task8() {}
void task9() {}
void task10() {}