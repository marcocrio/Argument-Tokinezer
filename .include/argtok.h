#ifndef ARGTOK_FILE
#define ARGTOK_FILE

//data structure "token" to easly deallocate memory
typedef struct Tokenspll Tokenspll;
typedef struct Token Token;

struct Tokenspll {
  char tokenchar;
  int index;
  struct Tokenspll* next;
};

struct Token {
  Tokenspll** token;
  int index, tokensize;
  struct Token* next;
};


char** argtok(char*);
int validation(char*);
char** read(char*);

Tokenspll* tokeninit();//Initializes a new Token Character
Token* vectorinit();//Initializes a new Token Vector entry
void freemem(Token* t); // dealocates instance of data structure Token


#endif