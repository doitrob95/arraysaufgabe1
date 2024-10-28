#include <stdio.h>

int main(void) {
    float noten[10];
    int i;
    float summe = 0.0;
    float durchschnitt;

    for (i = 0; i < 10; i++) {
        printf("\nGeben Sie die %d. von 10 Noten ein:", i + 1);
        scanf("%f", &noten[i]);
        summe = summe + noten[i];
        printf("%d", i);
    }
    durchschnitt = summe / (i);

    printf("\nDie Summe der Noten betraegt:%f\n", summe);
    printf("\nDer Notenschnitt liegt bei:%f\n", durchschnitt);

    return 0;
}
