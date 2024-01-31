#include <at89x52.h>

void startup(void);
void delay(void);

void main(void)
{
    startup();

    while (1) {
        P1_0 = 1;
        P1_1 = 0;
        P1_2 = 0;
        delay();

        P1_0 = 0;
        P1_1 = 1;
        P1_2 = 0;
        delay();

        P1_0 = 0;
        P1_1 = 0;
        P1_2 = 1;
        delay();
    }
}

void startup(void)
{
    for (int i = 0; i < 3; i++) {
        P1_0 = 0;
        P1_1 = 0;
        P1_2 = 0;
        delay();

        P1_0 = 1;
        P1_1 = 1;
        P1_2 = 1;
        delay();
    }
}

void delay(void)
{
    for (int x = 0; x < 100; x++) {
        for (int y = 0; y < 200; y++) { }
    }
}
