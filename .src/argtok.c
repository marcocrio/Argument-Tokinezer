#include <stdio.h>
#include <stdlib.h>
#include "../.include/argtok.h"


char ** argtok(char * tokenlist){
    validation(tokenlist); //input validation

    char** tokenvector=(char**)malloc(sizeof(char));
    char* temptoken;
    int tokenlenght=0,tokencnt=0,i=0;

    tokenvector[tokencnt]= (char*)malloc(sizeof(char));
    temptoken = tokenvector[tokencnt];

    while(tokenlist[i]!='\0'){
        
        if(tokenlist[i]==' ' || tokenlist[i]=='\0'){
            temptoken = (char*)realloc(temptoken, (tokenlenght+1)*sizeof(char));
            temptoken[tokenlenght]='\0';
            tokenlenght=0;

            if(tokenlist[i]=='\0'){
                tokenvector = (char**)realloc(tokenvector, (tokencnt+1)*sizeof(char));
                tokencnt++;
                tokenvector[tokencnt]=NULL;
            }else{
                tokenvector = (char**)realloc(tokenvector, (tokencnt+1)*sizeof(char));
                tokencnt++;
                tokenvector[tokencnt]= (char*)malloc(sizeof(char));
                temptoken = tokenvector[tokencnt];
            }
            i++;
        }
        
        temptoken = (char*)realloc(temptoken, (tokenlenght+1)*sizeof(char));
        temptoken[tokenlenght]=tokenlist[i];
        tokenlenght++;
        i++;

    }

    i=0;

    while(tokenvector[i]!=NULL){
       printf("%s\n",tokenvector[i]);
       i++;
    }
    
    

};



//Allocates a new Token Character link
Tokenspll* tokeninit(){
    Tokenspll* new = (Tokenspll* )malloc(sizeof(Tokenspll));
    new->index=0;
    new->next = NULL;
    return new;
};

//Allocates new Token Vector link.
Token* vectorinit(){
    Token* new = (Token*)malloc(sizeof(Token));
    new->tokensize=0;
    new->index=0;
    new->next=NULL;
    return new;
}


void freemem(Token* t){
    
};






//validates user input
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

    //input validation
    validation(token);

    char c= 'a';
    int i=0;
    do{
        c = token[i];
        if(c=='\n'){printf("New Line\n");}
        if(c=='\0'){printf("End of String\n");}
        else {printf("%c\n",c);}
        i++;
        c = token[i];
    }
    while(c!= '\0');

    return NULL;

}