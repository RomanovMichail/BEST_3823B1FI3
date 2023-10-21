int get_time(long long angle) {
    int ans;
    int hours,minutes,seconds;
    hours = angle / (360*60);
    angle = angle % (360*60);
    minutes = angle / 360;
    angle = angle % 360;
    seconds = angle/6;
    ans = hours*10000 + minutes*100 + seconds;
    return ans;
    }