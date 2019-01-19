# include <stdio.h>

# define NUMBER 5

void bsort(int a[], int n) {
    int i, j;
    for (i = 0; i < n - 1 ; i++){
        for (j = n - 1; j > i; j--) {
            if (a[j] > a[j-1]) {
                int temp = a[j];
                a[j] = a[j - 1];
                a[j-1] = temp;
            }
        }
    }
}

int main(void) {
    printf("Please input %d integers\n", NUMBER);
    int array[NUMBER];
    for (int i = 0; i < NUMBER; i++) {
        scanf("%d", &array[i]);
    }
    int n = sizeof(array) / sizeof(array[0]);
    bsort(array, n);
    printf("RESULT: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}