#include <stdio.h>
#include <ctype.h> 

char* my_upcase(char* param_1) {
    int i = 0;
    while(param_1[i] != '\0') {
        param_1[i] = toupper(param_1[i]);
        i++;
    }
    return 0;
}
int main() {
    char texte [] = "bonjour";
    my_upcase(texte);
    printf("%s\n", texte);
    return 0;
}