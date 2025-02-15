#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float gpa;
};

int main() {
    int n;
    scanf("%d", &n);
    struct Student *stlist = (struct Student*) malloc(sizeof(struct Student) * n);
    
    for (int i = 0; i < n; i++) {
        struct Student student;
        scanf("%s%d%f", stlist[i].name, &stlist[i].age, &stlist[i].gpa);
    }

    for (int i = 0; i < n; i++) {
        printf("Name: %s\n Age: %d\n GPA: %.2lf\n", stlist[i].name, stlist[i].age, stlist[i].gpa);
    }

    return 0;
}