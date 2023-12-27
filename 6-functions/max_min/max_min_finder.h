#include <math.h>

void get_max_min(int* array, int size, int* pMax, int* pMin){
    *pMin = *pMax = array[0];

    for (int i = 0; i < size; i++)
    {
        if (array[i] > *pMax) 
            *pMax = array[i];
        else if (array[i] < *pMin) 
            *pMin = array[i];
    }
}