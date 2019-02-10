#include <stdio.h>
#include <stdlib.h>
#include "argtok.h"


char ** argtok(char * token){
    if(token==NULL)return;

    char c= 'a';
    int i=0;
    while(c!= '\0'){
        c = token[i];
        if(c=='\n'){printf("New Line\n");}
        else if(c=='\0'){printf("Null Character\n");}
        else {printf("%c\n",c);}
        i++;
        c = token[i];
    };

}

int validation(char* string){    
    if(string==NULL){
        printf("Error: No tokens were provided...\nExiting the program.\n");
        return 1;
    }

    return 0;
}