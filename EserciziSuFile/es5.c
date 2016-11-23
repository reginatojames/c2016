//
// Created by Reginato James on 23/11/2016.
//
#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE *file;
    file = fopen("C:\\Users\\Reginato James\\Desktop\\CWorkspace\\EserciziSuFile\\numbers.txt", "r");

    int numberArray[100];
    int i = 0, somma = 0;
    float media = 0;

    while (!feof(file))
    {
        fscanf(file, "%d", &numberArray[i]);
        i++;
    }

    for (i = 0; i < 100; i++)
    {
        somma += numberArray[i];
    }

    media = somma/100;

    printf("Media= %f", media);
    return 0;
}