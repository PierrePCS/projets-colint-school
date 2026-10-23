#include <stdio.h>

int my_abs(int param_1) {
    if (param_1 < 0) {
        return -param_1;
    }
    else {
        return param_1;
    }
}
int main(void) {
    printf("%d\n", my_abs(-42)); 
    printf("%d\n", my_abs(7));  
    return 0;
}