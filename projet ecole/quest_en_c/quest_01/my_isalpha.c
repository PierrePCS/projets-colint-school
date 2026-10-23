#include <stdio.h>

int my_isalpha(char param_1) {
    if ((param_1 >= 'a' && param_1 <= 'z') || (param_1 >= 'A' && param_1 <= 'Z')) {
        return 1;
    }
    else {
        return 0;
    }
}

int main(void) {
    char test1 = 'g';
    char test2 = 'M';
    char test3 = '8'; 
    char test4 = '!'; 

    printf("Resultat pour '%c' : %d\n", test1, my_isalpha(test1)); 
    printf("Resultat pour '%c' : %d\n", test2, my_isalpha(test2)); 
    printf("Resultat pour '%c' : %d\n", test3, my_isalpha(test3)); 
    printf("Resultat pour '%c' : %d\n", test4, my_isalpha(test4)); 

    return 0;
}