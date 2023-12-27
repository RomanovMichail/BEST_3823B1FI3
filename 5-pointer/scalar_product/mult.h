#include <math.h>

#define M_PI 3.14159265

int scalar_product(int* vec1, int* vec2, int size){
    int numer = 0;

    for (int i = 0; i < size; i++){
        numer += vec1[i] * vec2[i];
    }

    double t1 = 0;
    double t2 = 0;
    
    for (int i = 0; i < size; i++){
        t1 += vec1[i] * vec1[i];
        t2 += vec2[i] * vec2[i];
    }
    
    double denom = sqrt(t1 * t2);
    double res1 = acos(numer / denom);

    return (int)(res1 * 180 / M_PI);
}