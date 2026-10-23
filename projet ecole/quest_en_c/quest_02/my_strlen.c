#include <stdio.h>

size_t my_strlen(const char *param_1)
{
    size_t compteur = 0;

    while (param_1[compteur] != '\0') {
        compteur++;
    }

    return compteur;
}

int main(void)
{
    const char *texte = "Bonjour";

    printf("%zu\n", my_strlen(texte));
    return 0;
}