#include <stdio.h>
#include <stdlib.h>
#include "../.include/argtok.h"


char ** argtok(char * tokenlist){
    validation(tokenlist); //input validation

    char** tokenvector;
    int tokencnt=0,i=0, tokensize=0;

    Tokenspll* charcursor = tokeninit();
    Token* tokcursor = vectorinit();
    Token* head = tokcursor;

    tokcursor->token = &charcursor;

    //count number and lenght of tokens.
    while(tokenlist[i]!= '\0'){
        charcursor->tokenchar = tokenlist[i];
        charcursor->index = tokensize;
        charcursor->next = tokeninit();
        charcursor = charcursor->next;
        tokensize++;
        i++;

        if(tokenlist[i]==' ' || tokenlist[i]=='\0'){
            charcursor->tokenchar = '\0';
            charcursor->index = tokensize;

            //initialize next 
            if(tokenlist[i]!='\0'){
                tokcursor->index =tokencnt;
                tokcursor->tokensize = tokensize;
                tokcursor->next = vectorinit();
                charcursor=tokeninit();
                tokcursor = tokcursor->next;
                tokcursor->token = &charcursor;
                tokencnt++;
            }
            tokensize=0;

        }
    }



    charcursor= *head->token;
    char c;
    char* tmp=(char*)malloc(i*sizeof(char));
    i=0;
    while(charcursor->tokenchar!='\0'){  
        c= charcursor->tokenchar;
       // printf("%c",c);  
        tmp[i]= charcursor->tokenchar;
        charcursor= charcursor->next;
        i++;
    }

    

    printf("%s\n",tmp);

    return tokenvector;

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