#include <stdio.h>

int main(void){
  printf("Hello, what is your name? ");
  char name[50];
  scanf("%s", name);
  printf("Hello %s\n", name);
  return 0;
}
