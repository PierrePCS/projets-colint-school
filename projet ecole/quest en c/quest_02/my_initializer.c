#include <stdio.h>
void my_initializer(int *variable) {
  *variable = 0;
}

int main() {
  int variable_a = 12;
  printf("%d\n", variable_a); 
  my_initializer(&variable_a);
  printf("%d\n", variable_a); 
  return 0;
}