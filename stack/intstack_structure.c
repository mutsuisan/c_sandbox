#include <stdio.h>
#include <stdlib.h>
#include "intstack_structure.h"


int Initialize(IntStack *s, int max){
    s->ptr = 0;
    // create stack memory zone
    if ((s->stk = calloc(max, sizeof(int))) == NULL){
        return -1;
    } 
    s->max = max;
    return 0;
}

int Push(IntStack *s, int x) {
    if (s->ptr == s->max) {
        // stack is full
        return -1;
    }
    s->stk[s->ptr++] = x;
    return 0;
}

int Pop(IntStack *s, int *x) {
    if (s->ptr <= 0) {
        // stack is empty
        return -1;
    }
    *x = s->stk[--s->ptr];
    return 0;
}

int Size(IntStack *s) {
    return s->ptr;
}

int Capacity(IntStack *s) {
    return s->max;
}

void Print(IntStack *s) {
    for (int i = 0; i < s->max; i++) {
        printf("%d ", s->stk[i]);
    }
    putchar('\n');
}

void Terminate(IntStack *s) {
    if (s->stk != NULL) {
        free(s->stk);
        s->max = s->ptr = 0;
    }     
}
