#include <stdio.h>

int main() {
    int a;
    int b;
    int c;

    int *p_a = &a;
    int *p_b = &b;
    int *p_c = &c;

    printf("Zadejte cislo 1: \n");
    scanf("%d", &a);
    printf("Zadejte cislo 2: \n");
    scanf("%d", &b);
    printf("Zadejte cislo 3: \n");
    scanf("%d", &c);

    int soucet = *p_a + *p_b + *p_c;

    int max = *p_a;
    if (max < *p_b) {
        max = *p_b;
    }
    if (max < *p_c) {
        max = *p_c;
    }

    printf("Soucet: %d\n", soucet);
    printf("Maximum: %d\n", max);
    if (soucet % 2 == 0) {
        printf("Cislo je sude");
    } else {
        printf("Cislo je liche");
    }
}