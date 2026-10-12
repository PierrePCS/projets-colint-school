#include <stdio.h>

int my_jsupper(char param_1) {
    if(param_1 >= 'A' && param_1 <= 'Z') {
        return 1;
    }
    else {
        return 0;
    }
}

int main(void) {
    printf("%d\n", my_jsupper('S'));
    return 0;
}