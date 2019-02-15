#include <stdio.h>
#include <stdlib.h>
#include "../.include/argtok.h"


char ** argtok(char * tkn){
    validation(tkn); //input validation

    char** tknv;
    int tokenlenght=0,tokencnt=0,i=0,cursor=0,j=0;   

    //Traverss and gets the number of tokens
    while(tkn[i]!= '\0'){
        if(tkn[i]==' ')tokencnt++;
        i++;
    }
    tknv=(char**)malloc((tokencnt+1)*sizeof(char*));//allocates memory for tokens

    tokencnt=0;
    i=0;
    while(tkn[i]!='\0'){
        
        if(tkn[i]==' ' || tkn[i+1]=='\0'){
            if(tkn[i+1]=='\0')i++;
            tokenlenght= ((i+(i+2))/2)-cursor;// gets the lenght of token
            tknv[tokencnt]=(char*)malloc( (tokenlenght)*sizeof(char));//allocates memory for token
            //populates token
            for(j=0; j<tokenlenght;j++){
                tknv[tokencnt][j]=tkn[cursor];
                cursor++;
            }
            //printf("%s\n",tknv[tokencnt]);
            tokencnt++;
            tokenlenght=0;
            
        };

        i++;

    };

    tknv[tokencnt]=NULL;//finalizes token vector with a null value

    return tknv;

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