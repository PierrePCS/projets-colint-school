int compter_lettre(char* texte, char lettre) {

    int position = 0;
    int total = 0;

    while(texte[position] != '\0') {
        if(texte[position] == lettre) {
           total++;
        }
        position++;
    }
    return total;
}