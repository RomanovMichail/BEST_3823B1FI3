#include <math.h>
#include <string.h>
#include <stdio.h>
#include<stdlib.h>
void lower(char* str){ 
    for (; *str != '\0'; str++) {
        *str = tolower((unsigned char) *str);
    }

}
