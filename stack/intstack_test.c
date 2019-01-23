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
        printf("Current data: %d / %d\n", Size(&stack), Capacity(&stack));
        printf("Please choose an action (0 FIN 1 PUSH 2 POP 3 PRINT): ");
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
            case 2:
                puts("Pop: ");
                if (Pop(&stack, &x) == -1) {
                    puts("Failed to pop");
                } else {
                    printf("Poped '%d' from stack\n", x);
                }
                break;
            case 3:
                puts("Print: ");
                Print(&stack);
                break;
        }
    }

    // terminate stack
    Terminate(&stack);
 
    return 0;
}
