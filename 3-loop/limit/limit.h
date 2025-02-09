#include <math.h>

double limit(double eps, int n_max){
    double lim, lim1;
    if (n_max == 1) return 1 / sqrt(1*1+1);
    else{
        for (int i = 0; i<n_max; i++){
            lim = i / sqrt(i*i+i);
            lim1 = (i+1) / sqrt((i+1)*(i+1)+(i+1));
            if ((lim1 - lim) <= eps)
                    return lim1;
        }
        return lim1;
    }
}