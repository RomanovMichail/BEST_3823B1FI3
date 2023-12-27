#include <math.h>


unsigned long long pack_ull(unsigned char arr[], int size)
{
    unsigned long long res = 0;
    
    if (size > 8) 
        return 0;

    for (int i = 0; i < size; i++) 
        res |= (unsigned long long)arr[i] << (8 * i);

    return res;
}

unsigned char unpack_ull(unsigned long long input)
{
    return (input >> 32) & 0xFF;
}