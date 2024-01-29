#include <at89x52.h>

void init(void);
void delay(void);

void main(void)
{
    init();

    while (1) {
        P1_1 = 1;
        P1_2 = 0;
        P1_3 = 0;
        delay();

        P1_1 = 0;
        P1_2 = 1;
        P1_3 = 0;
        delay();

        P1_1 = 0;
        P1_2 = 0;
        P1_3 = 1;
        delay();
    }
}

void init(void)
{
    for (int i = 0; i < 3; i++) {
        P1_1 = 0;
        P1_2 = 0;
        P1_3 = 0;
        delay();

        P1_1 = 1;
        P1_2 = 1;
        P1_3 = 1;
        delay();
    }
}

void delay(void)
{
    for (int x = 0; x < 200; x++) {
        for (int y = 0; y < 200; y++) { }
    }
}
