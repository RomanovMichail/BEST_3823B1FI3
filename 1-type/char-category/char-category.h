#include <stdbool.h>


bool is_digit(char x) {
    if (x >= 48 && x <=57) return true;
    else return false;
}

bool is_letter(char x) {
    if ((x >= 65 && x <=90)||(x >= 97 && x <=122)) return true;
    else return false;
}
   
bool is_punctuation(char x) {
    if ((x >= 33 && x <=47)||(x >= 58 && x <=64)||(x >= 91 && x <=96)||(x >= 123 && x <= 126)) return true;
    else return false;
}
int get_ascii_code(char first, char second, char third) {
    int ans[3] = {0,0,0};
    int ascii_first = first;
    int ascii_second = second;
    int ascii_third = third;

    ans[0] = ascii_first;
    ans[1] = ascii_second;
    ans[2] = ascii_third;
    return ans[0]*1000000 + ans[1]*1000 + ans[2];
}