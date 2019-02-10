/*  --Author: Marco A Ramirez
    --Version: 0.1
    --Description: "This library is intended to create an argument tokenizer function
    --which has white space as delimeter. The argtok() function takes a string
    --and breaks it up creating a "null terminated" vector of pointers to newly 
    --allocated strings contining the tokens provided as by the user."
*/
#ifndef ARGTOK_FILE
#define ARGTOK_FILE


char** argtok(char*);
int validation(char*);
char** read(char*);


#endif