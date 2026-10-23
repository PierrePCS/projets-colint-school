#include <stdio.h>
#include <stddef.h>

int my_strcmp(const char *param_1, const char *param_2)
{

    while (*param_1 != '\0' && *param_1 == *param_2) {
        param_1++;
        param_2++;
    }
    if (*param_1 == *param_2) {
        return 0;
    } else {
        return -1;
    }
}

int main() {
    char *chaine1 = "Bonjour";
    char *chaine2 = "Bonjour";
    
    // Appel de la fonction avec les deux chaînes requises
    int comparaison = my_strcmp(chaine1, chaine2);
    
    // Affichage du résultat (-1 si différent, 0 si identique)
    printf("%d\n", comparaison);
    
    return 0;
}
