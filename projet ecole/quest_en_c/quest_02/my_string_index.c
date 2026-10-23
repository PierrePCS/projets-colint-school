#include <stdio.h>

int my_string_index(char* param_1, char param_2) {
    int index = 0; 

    while (*param_1 != '\0') {
        
        if (*param_1 == param_2) {
            return index; 
        }
        param_1++; 
        index++;   
    }

    return -1; 
}

int main() {
    
    char haystack[] = "hello";
    char needle = 'l';
    
    int position = my_string_index(haystack, needle);
    
    printf("Position de '%c' dans \"%s\" : %d\n", needle, haystack, position);
    
    
    return 0;
}
