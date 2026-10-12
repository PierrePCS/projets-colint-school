#include <stdio.h>

void remplacer_lettre(char* texte, char lettre, char nouvelle_lettre) {
    int position = 0;
    
    while (texte[position] != '\0') {
        
        
        if (texte[position] == lettre) {
           
            texte[position] = nouvelle_lettre;
        }
        
        position++;
    }
}
int main() {
    
    char mon_mot[] = "bonjour tout le monde";
    
    printf("Avant : %s\n", mon_mot);
    remplacer_lettre(mon_mot, 'o', '*');
    
    printf("Apres : %s\n", mon_mot); 
 
    
    return 0;
}