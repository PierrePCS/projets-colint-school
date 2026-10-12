#include <stdio.h>


int trouver_lettre(char* texte, char lettre_recherchee) {
    int position = 0;
    
    while (texte[position] != '\0') {
        
        if (texte[position] == lettre_recherchee) {
            return position; 
        }
        
        position++; 
    }
    
    return -1; 
}
int main() {
    char mon_mot[] = "programmation";
    
    int resultat = trouver_lettre(mon_mot, 'a');
    printf("La lettre 'a' se trouve a la position : %d\n", resultat); 
    
    int resultat_z = trouver_lettre(mon_mot, 'z');
    printf("La lettre 'z' se trouve a la position : %d\n", resultat_z); 
    
    return 0;
}