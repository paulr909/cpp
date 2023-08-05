#include <stdio.h>
#include <string.h>

int main() {
    struct date {
        int year;
        int month;
        int day;
    };
    struct person {
        char name[32];
        struct date birthday;
    };
    struct person p1;

    strcpy(p1.name, "George Washington");
    p1.birthday.year = 1732;
    p1.birthday.month = 2;
    p1.birthday.day = 22;

    printf("My p1 %s was born on %d/%d/%d\n",
           p1.name,
           p1.birthday.day,
           p1.birthday.month,
           p1.birthday.year);
    return (0);
}
