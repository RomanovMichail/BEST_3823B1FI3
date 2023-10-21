int reverse(int number) {
    int ans = 0, i = 1000;
    int c, num;
    num = number;
    while (num > 0)
    {
        c = num % 10;
        if (c != 0)
        {
            ans = ans + c*i;
        }
        i = i/10;
        num = num / 10;
    }
    return ans;
}


double decomposition(int number) {
    float a,b,c,d ;
    float a_f, b_f, c_f, d_f;
    float harmony;
    a = (number / 1000) * 1000;
    b = (number / 100 % 10) * 100;
    c = (number % 100 / 10) * 10;
    d = number % 10;
    a_f = 1/a;
    b_f = 1/b;
    c_f = 1/c;
    d_f = 1/d;
    harmony = 4 / (a_f + b_f + c_f + d_f);
    return harmony;
}


int append(int number, int start, int end) {
    int ans;
    if (start < 0)
    {
        start = start * (-1);
        ans = start * 10000;
        ans = (ans + number)*10+end;
        ans = ans * (-1);
        return ans;
    }
    else
    {
        ans = start * 10000;
        ans = (ans + number)*10+end;
        return ans;
    }
}
