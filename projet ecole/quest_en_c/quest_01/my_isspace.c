#include <stdio.h>
int my_isspace(char param_1){
    if(param_1 == ' ') {
        return 1;
    }
    else {
        return 0;
    }
}
int main(void) {
    printf("%d\n", my_isspace(' '));
    return 0;
}