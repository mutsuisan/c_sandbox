#include <stdio.h>
#include <stdlib.h>
#include "intstack_structure.h"


int main(void) {
    int size;
    printf("Please input stack size: ");
    scanf("%d", &size);

    IntStack stack;
    if (Initialize(&stack, size) == -1) {
        // failed to create intstack
        puts("Failed to initialze stack");
        return 1;
    }

    while (1) {
        int menu, x;
        printf("Current data: %d / %d", Size(&stack), Capacity(&stack));
        printf("\t Please choose an action: ");
        scanf("%d", &menu);
        if (menu == 0) break;
        
        /* TODO: ADD MORE FEATURES */
        // push integers in stack
        switch (menu) {
            case 1:
                printf("Push: Please input an integer: ");
                scanf("%d", &x);
                if (Push(&stack, x) == -1) {
                    puts("Failed to push");
                } else {
                    printf("Added '%d' to stack\n", x);
                }
                break;
        }
    }

    // print items
    Print(&stack);

    // terminate stack
    Terminate(&stack);
 
    return 0;
}
