#include<string.h>
char* my_strncpy(char* param_1, char* param_2, int param_3) {

    int position = 0;
    while(position < param_3 && param_2[position] != '\0') {
        param_1[position] = param_2[position];
         position++;
    }
  
    while (position < param_3) {
        param_1[position] = '\0';
        position++;
    }

    return param_1;
}

int main(void) {


    return 0;
}