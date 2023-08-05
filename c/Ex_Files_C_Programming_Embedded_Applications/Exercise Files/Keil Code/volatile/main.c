#include <stdio.h>

int a;
int b;
int x;

char str[30];

int main() {
    a = 8;
    b = a * 7;
    if (a == 8)
        printf("a equals 8!!!");
    else
        sprintf(str, "a is NOT 8!!!");

    a = 25;
    b = 39;

    x = 1000;
    while (x > 5)
        x--;

    while (1);
    return 0;
}

void SystemInit() {}
