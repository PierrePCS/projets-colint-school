#include <stddef.h>

char* my_strrchr(char* param_1, char param_2) {
    char* last_match = NULL;

    do {
        if (*param_1 == param_2) {
            last_match = param_1;
        }
    } while (*param_1++ != '\0');

    return last_match;
}

int main() {
    char* texte ="abcabc";
    char charactere ="b";
    
    return 0;
}

