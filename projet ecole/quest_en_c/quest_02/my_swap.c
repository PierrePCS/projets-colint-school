#include <stdio.h>
void my_swap(int *param_1, int *param_2) {
  *param_1 = 12;
  *param_2 = 21;
}

int main() {
    int a;
    int b;
    int *param_1 = &a;
    int *param_2 = &b;

    my_swap(param_1, param_2);
    my_swap(&a, &b);
    
    printf("a = %d, b = %d\n", *param_1, *param_2);
    return 0;
} 