//
// Created by Reginato James on 23/11/2016.
//
#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE *file;
    file = fopen("C:\\Users\\Reginato James\\Desktop\\CWorkspace\\EserciziSuFile\\numbers.txt", "r");

    int numberArray[100];
    int i = 0, max = 0, somma = 0, min = 100;
    float media = 0;

    while (!feof(file))
    {
        fscanf(file, "%d", &numberArray[i]);
        i++;
    }

    for (i = 0; i < 100; i++)
    {
        if(numberArray[i] > max)
            max = numberArray[i];
        if(numberArray[i] < min)
            min = numberArray[i];
        somma += numberArray[i];
    }

    media = somma/100;
    printf("Max= %d\nMin= %d\nMedia= %f", max, min, media);
    return 0;
}