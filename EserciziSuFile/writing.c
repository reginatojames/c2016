//
// Created by Reginato James on 23/11/2016.
//
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
    FILE *file;
    file = fopen("C:\\Users\\Reginato James\\Desktop\\CWorkspace\\EserciziSuFile\\random.txt", "a");


    int i = 0, range = 0;

    srand(time(NULL));
    int r = rand();    //returns a pseudo-random integer between 0 and RAND_MAX
    int numberArray[r];
    for (i = 0; i < r; i++)
    {
        fprintf(file, "%d\n", numberArray[i]);
    }
    return 0;
}