#include <stdio.h>
#include <ctype.h> 

char* my_downcase (char* param_1) {
    int i = 0;
    while(param_1[i] != '\0') {
        param_1[i] = tolower(param_1[i]);
        i++;
    }
    return 0;
}
int main() {
    char texte [] = "bOnjoUr";
    my_downcase(texte);
    printf("%s\n", texte);
    return 0;
}