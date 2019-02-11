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

    tokcursor->token = charcursor;

    //count number and lenght of tokens.
    while(tokenlist[i]!= '\n'){
        charcursor->tokenchar = tokenlist[i];
        charcursor->index = i;
        charcursor->next = tokeninit();
        charcursor = charcursor->next;
        tokensize++;

        if(tokenlist[i+1]==' '){
            
            charcursor->tokenchar = '\0';
            charcursor->index = i;
            charcursor->next = NULL;
            tokensize++;


            tokcursor->index =tokencnt;
            tokcursor->tokensize=tokensize;
            tokcursor->next = vectorinit();
            tokcursor = tokcursor->next;
            tokcursor->token = charcursor;

            tokensize=0;
            tokencnt++;
            i++;

        }
        i++;
    }

    charcursor= head->token;
    char c;
    i=0;
    char* tmp=(char*)malloc(head->tokensize*sizeof(char));
    while(charcursor->tokenchar!='\0'){  
        c= charcursor->tokenchar;
        printf("%c",c);  
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
    while(c!= '\0'){
        c = token[i];
        if(c=='\n'){printf("New Line\n");}
        else if(c=='\0'){printf("Null Character\n");}
        else {printf("%c\n",c);}
        i++;
        c = token[i];
    };

    return NULL;

}