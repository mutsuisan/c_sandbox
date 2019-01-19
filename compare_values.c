#include <stdio.h>

int compare(int v1, int v2)
{
  return (v1 > v2) ? v1 - v2 : v2 - v1;
}


int main(void) 
{
  int n1, n2;
  puts("Please input two integers");
  printf("int1: ");  scanf("%d", &n1);
  printf("int2: ");  scanf("%d", &n2);
  
  if (n1 != n2) {
    puts("The values are different");
    int difference = compare(n1, n2);
    printf("Difference: %d", difference);
  } else {
    puts("The values are the same");
  }
  putchar('\n');
}

