#include <stdio.h>
#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY
typedef struct s_integer_array
{
    int size;
    int* array;
} integer_array;
#endif

void my_first_struct(integer_array* param_1)
{
  int i = 0;
    while (i < param_1->size)
    {
        printf("%d\n", param_1->array[i]);
         i++;
    }
  
}
int main()
{
  
    int mon_tableau[] = {1, 2, 3};
    integer_array ma_boite;
    ma_boite.size = 3;
    ma_boite.array = mon_tableau;

    printf("--- Test 1 ---\n");
    my_first_struct(&ma_boite); 
    return 0;
}