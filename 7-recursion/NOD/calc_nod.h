#include <math.h>

int nod(int first, int second)
{
    if ((first <= 0) || (second <= 0))
        return -1;

    else if (first == second)
        return first;
    
    else
        return nod(fmin(first, second), fmax(first, second) - fmin(first, second));
}
