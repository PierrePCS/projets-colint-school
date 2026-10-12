#include <stdio.h>
#include <string.h>

void my_putstr(char* param_1) {
    int len = strlen(param_1);
    
    if (len < 2) {
        param_1[0] = '\0';
        return;
    }

    for(int i = 0; i < len - 1; i++) {
        param_1[i] = param_1[i + 1];
    }
        param_1[len - 2] = '\0';
}

int main(void) {
    char texte[] = "Bonjour";

    my_putstr(texte);
    printf("%s\n", texte);
    return 0;
}