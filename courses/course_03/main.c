#include <stdio.h>

/*struct Alma {
    int size;
    float price;
    char color;
}Alma_t;
*/

//A kikommentelt reszek mukodnek egymassal

typedef struct Alma{
    int size;
    float price;
    char color;
}Alma_t;

int main(void) {
    /*struct Alma apple;
    apple.price = 0.8;*/

    Alma_t apfel;
    apfel.price = 0.8;
    printf("%.2f", apfel.price);
    return 0;
}
