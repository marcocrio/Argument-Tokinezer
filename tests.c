#include <stdio.h>
#include <stdlib.h>
#include ".include/argtok.h"
#include <string.h>




int main(){
    system("clear");


    char** tknv;
    char* tkn,*tmp;
    int tokenlenght=0,tokencnt=0,i=0,cursor=0,j=0;   

    printf("$ ");
    scanf("%m[^\n]",&tkn);

    while(tkn[i]!= '\0'){
        if(tkn[i]==' ')tokencnt++;
        i++;
    }
    tknv=(char**)malloc((tokencnt+1)*sizeof(char*));

    tokencnt=0;
    i=0;
    while(tkn[i]!='\0'){
        
        if(tkn[i]==' ' || tkn[i+1]=='\0'){
            if(tkn[i+1]=='\0')i++;
            tokenlenght= ((i+(i+2))/2)-cursor;
            tknv[tokencnt]=(char*)malloc( (tokenlenght)*sizeof(char));
            for(j=0; j<tokenlenght;j++){
                tknv[tokencnt][j]=tkn[cursor];
                cursor++;
            }
            printf("%s\n",tknv[tokencnt]);
            tokencnt++;
            tokenlenght=0;
            
        };

        i++;

    };

    tknv[tokencnt]=NULL;
    i=0;

    while(tknv[i]){
        tknv[i];
        i++;
    }

    return 0;
};
