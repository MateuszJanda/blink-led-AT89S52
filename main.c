#include <at89x52.h>

void delay(void);

void main(void)
{
    while (1) {
        // P1.1 high and P1.3 low
        P1_1 = 1;
        P1_3 = 0;
        delay();

        // P1.1 low and P1.3 high
        P1_1 = 0;
        P1_3 = 1;
        delay();
    }
}

void delay(void)
{
    unsigned int x, y;
    for (x = 0; x < 200; x++) {

        for (y = 0; y < 200; y++) { }
    }
}
