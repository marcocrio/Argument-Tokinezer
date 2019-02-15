#include <stdio.h>
#include <stdlib.h>
#include ".include/argtok.h"
#include <string.h>


void main (){
    system("clear");

    printf("$ ");
    
    char ** tokenvector;
    char* tokenlist;
    int i =0;
    //scanf reads the buffer until it finds a new line characte '\n'.
    //then memory is allocated for the buffer   
    scanf("%m[^\n]", &tokenlist);


    //token generation returns the token vector
    tokenvector=argtok(tokenlist);

    printf("\nYour tokens:");
    while(tokenvector[i]){
        printf(" | %s",tokenvector[i]);
        free(tokenvector[i]);//Deallocates tokens
        i++;
    }

    //Deallocates token vector
    free(tokenvector);
    //Buffer deallocation to avoid leak.
    free(tokenlist);


    printf("\n");    
    return;
}
