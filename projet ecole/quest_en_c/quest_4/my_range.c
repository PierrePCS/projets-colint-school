#include <stdlib.h>

int *my_range(int param_1, int param_2)
{
    int *array;
    int size;
    int i;

    if (param_1 >= param_2)
    {
        return (NULL);
    }
    size = param_2 - param_1;
    array = (int *)malloc(sizeof(int) * size);
    if (array == NULL)
    {
        return (NULL);
    }
    i = 0;
    while (param_1 < param_2)
    {
        array[i] = param_1;
        param_1++;
        i++;
    }

    return (array);
}
