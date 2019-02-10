#include <stdio.h>
#include <stdlib.h>
#include ".include/argtok.h"


void main (){
    system("clear");

    printf("Provide a list of tokens separated by an space:\n");
    
    //scanf reads the buffer until it finds a new line characte '\n'.
    //then memory is allocated for the buffer   
    char *tokenlist=NULL;
    scanf("%m[^\n]", &tokenlist);

    //input validation
    validation(tokenlist);
    
    //token generation
    char ** tokens=NULL;
    tokens = read(tokenlist);

    //Buffer deallocation to avoid leak.
    free(tokenlist);



    printf("\n");    
    return;
}
