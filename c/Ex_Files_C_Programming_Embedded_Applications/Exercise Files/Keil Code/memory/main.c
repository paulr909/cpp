#include <stdint.h>

#define SIZE (4000)

uint32_t x;
uint8_t sensor_data[SIZE];

int main() {

    for (x = 0; x < SIZE; x++)
        sensor_data[x] = x;

    while (1);
    return 0;
}

void SystemInit() {}
