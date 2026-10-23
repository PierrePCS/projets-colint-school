#include <stdio.h>
#include <string.h>

char* reverse_string(char *param_1) {
    int i = 0;
    int j = strlen(param_1) - 1;
    char temp;

    while (i < j) {
   
        temp = param_1[i];
        param_1[i] = param_1[j];
        param_1[j] = temp;
        
        i++;
        j--;
    }
    
    return param_1;
}

int main(void) {

    char message[] = "Bonjour"; 
    reverse_string(message);
    printf("Inversé  : %s\n", message);
    
    return 0;
}
