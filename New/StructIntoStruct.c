#include <stdio.h>

struct student {
    int age;
    int grade;
    char name[40];
};

int main() {
    struct student s1 = {19, 9, "Jason"};
    struct student s2;

    printf("Assigning, s2 = s1\n");
    s2 = s1;

    printf("Results, Name: %s, Age: %d, Grade: %d\n", s2.name, s2.age, s2.grade);

    return 0;
}