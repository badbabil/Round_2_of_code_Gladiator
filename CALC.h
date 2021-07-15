/*----- FILE CALC.H --------------------------------------------------*/
/*                                                                    */
/* Header file for CALC.C PUSHPOP.C READTOKN.C                        */
/* a simple calculator                                                */
/*--------------------------------------------------------------------*/
#ifndef KEY_H //<<----- WE ADDED THE HEADER GUARD
#define KEY_H //<<---- "KEY_H" is just a name of the key

typedef enum toks
{
  T_INTEGER,
  T_PLUS,
  T_TIMES,
  T_MINUS,
  T_DIVIDE,
  T_EQUALS,
  T_STOP
} Token;
Token read_token(char buf[]);
typedef struct int_link
{
  struct int_link *next;
  int i;
} IntLink;
typedef struct int_stack
{
  IntLink *top;
} IntStack;
extern void push(IntStack *, int);
extern int pop(IntStack *);
#endif //<<---- Ending of the header guard