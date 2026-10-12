#include <stdio.h>
void my_string_formatting(char* param_1, char* param_2, int param_3) {
      
printf("Hello, My name is %s %s, I'm %d.\n", param_1, param_2, param_3);
}
int main(void) {
    char message[100]; 
    my_string_formatting("john", "doe", 37);
   
    printf("%s\n", message); 

    return 0;
}