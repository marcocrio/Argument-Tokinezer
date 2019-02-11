#ifndef ARGTOK_FILE
#define ARGTOK_FILE

//data structure "token" to easly deallocate memory
typedef struct {
  char tokenchar;
  int index;
  struct Tokenspll* next;
} Tokenspll;

typedef struct {
  Tokenspll* token;
  int index, tokensize;
  struct Token* next;
} Token;


char** argtok(char*);
int validation(char*);
char** read(char*);

Tokenspll* tokeninit();//Initializes a new Token Character
Token* vectorinit();//Initializes a new Token Vector entry
void freemem(Token* t); // dealocates instance of data structure Token


#endif