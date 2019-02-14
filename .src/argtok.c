#include <stdio.h>
#include <stdlib.h>
#include "../.include/argtok.h"


char ** argtok(char * tokenlist){
    validation(tokenlist); //input validation

    char** tokenvector;//allocate the head of token vector
    char* temptoken; //temporal token to traverse token
    int tokenlenght=0,tokencnt=0,i=0;


    
    //tokenvector[tokencnt]= (char*)malloc(sizeof(char));//ALLOCATES MEMORY FOR A TOKEN IN THE TOKEN VECTOR'S HEAD
    //temptoken = tokenvector[tokencnt];//USES A TEMPORARY POINTER TO WORK WITH EACH TOKEN ARRAY
    
    while(tokenlist[i]!= '\0'){
        if(tokenlist[i]==' ')tokencnt++;
        i++;
    }

    tokenvector = (char**)malloc(tokencnt+2*(sizeof(char*)));

    tokenvector[3]=tokenlist;

    printf("%s",tokenvector[4]);
/*
    tokencnt=0;
    temptoken= tokenvector[tokencnt];
    i=0;

    while(tokenlist[i]!='\0'){
        //REALLOCATES MEMORY AS NEEDED DEPENDING ON TOKENS LENGHT
        temptoken = (char*)realloc(temptoken, (tokenlenght+1)*sizeof(char));
        tokenvector[tokencnt]= temptoken;
        temptoken[tokenlenght]=tokenlist[i];
        tokenlenght++;
        i++;
        
        if(tokenlist[i]==' '){
            //printf("\n");
            temptoken[i]='\0';
            tokencnt++;
            //printf("%s\n",temptoken);
            temptoken= tokenvector[tokencnt];
            i++;
            tokenlenght=0;
        }
    }
    
    temptoken[i-1]='\0';
    tokenvector[tokencnt+1]=NULL;

    temptoken = NULL;

    i=0;

    while(tokenvector[i]!=NULL){
       printf("%s\n",tokenvector[i]);
       i++;
    };
    
    //deallocates tokens
    while(tokencnt!=0){
        free(tokenvector[tokencnt]);
        tokenvector[tokencnt]=NULL;
        tokencnt--;
    };
    */
    //deallocates token vector
    free(tokenvector);
    tokenvector=NULL;

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


 /*

//THIS FUNCTION IS FOR TESTING, IGNORE

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
*/