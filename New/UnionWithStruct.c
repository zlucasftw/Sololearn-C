#include <stdio.h>
#include <string.h>

typedef struct {
    char make[20];
    int model_year;
    int id_type; /* 0 for id_num, 1 for VIN */
    union {
        int id_num;
        char VIN[20];
    } id;
} vehicle;

int main() {
    vehicle car1;

    strcpy(car1.make, "Ford");
    car1.model_year = 2017;
    car1.id_type = 0;
    car1.id.id_num = 123098;

    printf("Car %s, %d", car1.make, car1.model_year);

    return 0;
}