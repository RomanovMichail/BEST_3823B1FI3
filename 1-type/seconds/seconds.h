int get_years(int seconds) {

    long int year;
    year = seconds / (12*31*24*60*60);
    return 1970 + year;
}

int get_month(int seconds) {
    long int month;
    seconds = seconds % (12 * 31 * 24 * 60 * 60);
    month = seconds / (31* 24 * 60 * 60);
    return month;
}

int get_day(int seconds) {
    int day;
    seconds = seconds % (12 * 31 * 24 * 60 * 60);
    seconds = seconds % (31* 24 * 60 * 60);
    day = seconds / (24 * 60 * 60);
    return day;
}

int get_hours(int seconds) {
    int hours;
    seconds = seconds % (12 * 31 * 24 * 60 * 60);
    seconds = seconds % (31* 24 * 60 * 60);
    seconds = seconds % (24 * 60 * 60);
    hours = seconds / (60 * 60);
    return hours;
}

int get_minutes(int seconds) {
    int minutes;
    seconds = seconds % (12 * 31 * 24 * 60 * 60);
    seconds = seconds % (31* 24 * 60 * 60);
    seconds = seconds % (24 * 60 * 60);
    seconds = seconds % (60 * 60);
    minutes = seconds / (60);
    return minutes;
}

int get_seconds(int seconds) {
    seconds = seconds % (12 * 31 * 24 * 60 * 60);
    seconds = seconds % (31* 24 * 60 * 60);
    seconds = seconds % (24 * 60 * 60);
    seconds = seconds % (60 * 60);
    seconds = seconds % (60);
    return seconds;
}


int get_magical_value(int seconds) {
    int ans;
    int year = get_years(seconds);
    int month = get_month(seconds);
    int day = get_day(seconds);
    int hours = get_hours(seconds);
    int minutes = get_minutes(seconds);
    int second = get_seconds(seconds);
    ans = ((year + month)/(1 + day + second))*((year + month)/(1 + day + second))+((minutes + (minutes/(1 + hours)))/(1 + hours));
    return ans;
    
}