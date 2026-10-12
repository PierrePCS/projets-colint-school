#include<stdio.h>

char* my_strstr(char *param_1, char *param_2)
{
	if (*param_2 == '\0')
		return param_1;

	for (; *param_1 != '\0'; param_1++) {
		char *h = param_1;
		char *n = param_2;

		while (*h != '\0' && *n != '\0' && *h == *n) {
			h++;
			n++;
		}
		if (*n == '\0')
			return param_1;
	}
	return 0;
}

int main() {
    char texte[] = "Bonjour le monde";
    char recherche[] = "le";
    
    char *resultat = my_strstr(texte, recherche);

    if (resultat != 0) {
        printf("Sous-chaine trouvee ! A partir de ce point, le reste est : \"%s\"\n", resultat);
        printf("Elle commence a l'indice : %ld\n", resultat - texte);
    } else {
        printf("La sous-chaine \"%s\" n'a pas ete trouvee.\n", recherche);
    }
    
    return 0;
}
