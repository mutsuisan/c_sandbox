#ifndef __IntStack
#define __IntStack


typedef struct {
    int max;
    int ptr;
    int *stk;
} IntStack;

int Initialize(IntStack *s, int max);

int Push(IntStack *s, int x);

int Pop(IntStack *s, int *x);

int Size(IntStack *s);

int Capacity(IntStack *s);

void Print(IntStack *s);

void Terminate(IntStack *s);

#endif