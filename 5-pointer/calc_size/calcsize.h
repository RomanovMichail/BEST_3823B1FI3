#include <math.h>


int calcsize(void* memory) 
{
    int* arr = (int*)memory;
    int size = 1;
    while (*arr != 47)
    {
        arr++;
        size++;
    }

    return size;
}
