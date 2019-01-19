# include <stdio.h>

int count_down(int input){
  while (input >= 0) {
    printf("%d\n", input);
    --input;
  }
  return 0;
}


int main(void){
  int num;
  printf("Please input an int\n");
  scanf("%d", &num);
  count_down(num);
}
