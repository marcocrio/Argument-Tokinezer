#include <stdio.h>
#include <stdlib.h>
#include "../.include/argtok.h"


char ** argtok(char * tknstrng){
    char ** tokenlist=NULL;
    char * token=NULL; 
    int tokencnt=0;

};

int validation(char* string){    
    if(string==NULL){
        printf("Error 1: No tokens were provided...\nExiting the program.\n\n");
        exit(1);
    }
    if(string[0]==' '){
        printf("Error 2: Your token list can't start with a white space.\nExiting the program.\n\n");
        exit(2);
    }

    return 0;
}




char ** read(char * token){

    char c= 'a';
    int i=0;
    while(c!= '\0'){
        c = token[i];
        if(c=='\n'){printf("New Line\n");}
        else if(c=='\0'){printf("Null Character\n");}
        else if(c==' '){printf("Space character");}
        else {printf("%c\n",c);}
        i++;
        c = token[i];
    };

    return NULL;

}