#include <stdio.h>
#include <string.h>

char* my_strcpy (char* param_1, char* param_2) {
strcpy(param_1, param_2);
    return param_1;

}
int main() {
    char source[] = "C'est un super test !";
    char destination[100];
    my_strcpy(destination, source);

    printf("Texte copie : %s\n", destination);
    return 0;

}