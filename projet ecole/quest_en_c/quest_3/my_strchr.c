#include <stddef.h>
#include <stdio.h>

char* my_strchr(char* param_1, char param_2) {
    while (*param_1 != '\0') {
        if (*param_1 == param_2) {
            return param_1;
        }
        param_1++;
    }
    if (*param_1 == param_2) {
        return param_1;
    }
    return NULL;
}

int main(void) {
    char str[] = "bonjour";
    char* result = my_strchr(str, 'o');

    if (result != NULL) {
        printf("Caractere trouve : %c\n", *result);
        printf("Suite depuis la position trouvee : %s\n", result);
    } else {
        printf("Caractere non trouve.\n");
    }
    return 0;
}