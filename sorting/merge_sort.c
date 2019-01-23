#include <stdio.h>
#include <stdlib.h>

static int *buff;

// recursive
static void __my_mergesort(int a[], int left, int right) {
    if (left < right) {
        int i;
        int p = 0;
        int j = 0;
        int k = left;

        int center = (left + right) / 2;
        
        __my_mergesort(a, left, center);
        __my_mergesort(a, center + 1, right);

        for (i = left; i <= center; i++) {
            buff[p++] = a[i];
        }
        // compare buff and a values
        while (i <= right && j < p) {
            a[k++] = (buff[j] <= a[i]) ? buff[j++] : a[i++];
        }
        while (j < p) {
            a[k++] = buff[j++];
        }
    }
}


int my_mergesort(int a[], int n) {
    if ((buff = calloc(n, sizeof(int))) == NULL) {
        // failed to create memory space
        return -1;
    }

    // run mergesort
    __my_mergesort(a, 0, n - 1);
    
    // free buffer
    free(buff);

    // succeeded 
    return 0;
}


int main(void) {
    // array size
    int n;
    // pointer to array's first item
    int *x;

    printf("Input array size: ");
    scanf("%d", &n);

    x = calloc(n, sizeof(int));

    // create an array of given size
    for (int i = 0; i < n; i++) {
        printf("x[%d]: ", i);
        scanf("%d", &x[i]);
    }

    // do merge sort
    my_mergesort(x, n);

    puts("Sorting finished");
    for (int i = 0; i < n; i++) {
        printf("x[%d] = %d\n", i, x[i]);
    }

    free(x);
    return 0;
}
