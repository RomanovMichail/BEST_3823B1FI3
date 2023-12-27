#include <math.h>
#include<stdio.h>

int* matrix_multy(int* A, int aM, int aN, int* B, int bM, int bN){
    int* mass = (int*)malloc(aM * bM * sizeof(int));
    
    if ((aN != bM))
        return NULL;
    
    for (int i = 0; i < aM * bN; i++)
        mass[i] = 0;
    
    for (int j = 0; j < aM * bN; j ++)
    {
        for (int i = 0; i < aN; i++)
        {
            mass[j] += A[aN * (j / aM) + i] * B[bN * i + (j % bN)]; 
        }
    }
    
    return mass;
}
