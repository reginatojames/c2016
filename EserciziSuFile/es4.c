//
// Created by Reginato James on 23/11/2016.
//
#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE *file;
    file = fopen("C:\\Users\\Reginato James\\Desktop\\CWorkspace\\EserciziSuFile\\numbers.txt", "r");

    int numberArray[100];
    int i = 0;
    double mult = 1;

    while (!feof(file))
    {
        fscanf(file, "%d", &numberArray[i]);
        i++;
    }

    for (i = 0; i < 100; i++)
    {
        mult = mult * numberArray[i];
    }

    printf("Moltiplicazione= %d", mult);
    return 0;
}