#include <stdio.h>
#include <stdlib.h>
#include ".include/argtok.h"
#include <string.h>




int main(){

    char** tknv;
    char* tkn,*tmp;
    int tokenlenght=0,tokencnt=0,i=0;   

    printf("$");
    scanf("%m[^\n]",&tkn);

    while(tkn[i]!= '\0'){
        if(tkn[i]==' ')tokencnt++;
        i++;
    }
    i=0;
    tokencnt++;

    tknv=(char**)malloc(tokencnt*sizeof(char*));
    tmp= (char*)malloc(sizeof(char));

    //tmp[0]=tkn[0];

    //tmp=(char*)realloc(tmp,5*sizeof(char));

    //tmp[1]=tkn[1];
    i=0;
    printf("%d", i);

    /*
    while(tkn[i]!='\0'){
        tmp=(char*)realloc(tmp,(i+1)*sizeof(char));
        printf("%d ",(int)strlen(tmp));
        tmp[i]=tkn[i];
        i++;
    }
    */
   // printf("%s\n%d\n",tmp,tokencnt);

};