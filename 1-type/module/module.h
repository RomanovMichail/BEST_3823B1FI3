int get_module(int a, int b, int c) {
    
    int ans;
    ans = ((a%c) * (b%c))%c;
    return ans;
}