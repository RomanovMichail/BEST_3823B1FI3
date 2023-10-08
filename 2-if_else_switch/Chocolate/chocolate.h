int chocolate(int n, int m, int k){
if (k <= (m * n) && ((k % n == 0) || (k % m == 0)) && m >=0 && n >=0 ){
    return 1;}
else{
    return 0;}
}