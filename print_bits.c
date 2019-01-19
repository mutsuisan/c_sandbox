#include <stdio.h>
#include <limits.h>

int count_bits (unsigned x) {
    int bits = 0;
    while (x) {
        if (x & 1U) bits ++;
        x >>= 1;
    }
    return bits;
}

int int_bits(void){
    return count_bits(UINT_MAX);
}

void print_bits(unsigned x) {
    for (int i = int_bits() - 1; i >= 0; i--) {
        putchar(((x >> i) & 1U) ? '1' : '0');
    }
}

int main (void) {
  unsigned a, b;
  printf("Please input two unsighned integers\n"); 
  printf("a: "); scanf("%u", &a);
  printf("b: "); scanf("%u", &b);
  printf("\na     = "); print_bits(a);  
  printf("\nb     = "); print_bits(b);
  printf("\na & b = "); print_bits(a & b);  printf("\t%u", a & b);
  printf("\na | b = "); print_bits(a | b);  printf("\t%u", a | b);
  printf("\na ^ b = "); print_bits(a ^ b);  printf("\t%u", a ^ b);
  printf("\n~a    = "); print_bits(~a);  printf("\t%u", ~a);
  printf("\n~b    = "); print_bits(~b);  printf("\t%u", ~b);
  putchar('\n');
}