#include <stdio.h>
#include <stdlib.h>
#include "argtok.h"


void main (){
    system("clear");

    printf("Provide a list of tokens separated by an space:\n");
    //Since 
    char *tokenlist=NULL;
    scanf("%m[^\n]", &tokenlist);

    validation(tokenlist);

    argtok(tokenlist);

    //printf("\n");
    
    return;
}
