#include <stdio.h>
#include <stdlib.h>
#include ".include/argtok.h"


char ** argtok(char * tokenlist){
    validation(tokenlist); //input validation

    char** tokenvector=(char**)malloc(sizeof(char));
    char* token=(char*)malloc(sizeof(char));
    int tokenlenght=0,tokencnt=0,i=0;


    while(tokenlist[i]!='\0'){
        
        tokenvector[tokencnt][tokenlenght]=tokenlist[i];
        tokenlenght++;


    }
