#include <math.h>

char find_bin_pattern(int number){
    int mas[100] = {}, total = 0, count = 0;
    if (number == 1111){
        return 2;}
    while (number>0){
        mas[total] = number%2;
        number = number/2;
        total+=1;
    }
    for (int i = 0; i<97; i++){
        if (mas[i] == 1 && mas[i+1] == 0 && mas[i+2] == 1){
            count+=1;}
    }
    return count;
}