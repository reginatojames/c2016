#include <stdio.h>

int main(void) {
    float array[6] = {35.4, 46.7, 77.55, 11.1, 9.04, 0.75}, a = 0;
    int i = 0, j =0;

    for(i = 0; i < 6; i++){ //crescente
        for (j = i + 1; j < 6; ++j)
        {
            if (array[i] > array[j])
            {
                a =  array[i];
                array[i] = array[j];
                array[j] = a;
            }
        }
    }

    for(i = 0; i < 6; i++){
        printf("%f\n", array[i]);
    }

    printf("------------------------------\n");

    for(i = 0; i < 6; i++){ //decrescente
        for (j = i + 1; j < 6; ++j)
        {
            if (array[i] < array[j])
            {
                a =  array[i];
                array[i] = array[j];
                array[j] = a;
            }
        }
    }

    for(i = 0; i < 6; i++){
        printf("%f\n", array[i]);
    }
    return 0;
}