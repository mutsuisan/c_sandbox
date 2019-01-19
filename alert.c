#include <stdio.h>

#define alert(str) (putchar('\a'), puts(str));

int main(void) {
    alert("Hello World.")
}
