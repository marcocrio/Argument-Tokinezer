#include <stdio.h>
#include <stdlib.h>
#include ".include/argtok.h"
#include <string.h>


void main (){
    system("clear");

    printf("Provide a list of tokens separated by an space:\n");
    

    char* tokenlist;
    //scanf reads the buffer until it finds a new line characte '\n'.
    //then memory is allocated for the buffer   
    scanf("%m[^\n]", &tokenlist);


    //token generation
    argtok(tokenlist);


    //Buffer deallocation to avoid leak.
    free(tokenlist);



    printf("\n");    
    return;
}
