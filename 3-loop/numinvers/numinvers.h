int num_invers(int num){
    
    if (num < 0) 
        return 0;
    int number = num;
    int arr[10];
    int index = 0;
    int ans = 0;
    while (number > 0){
        arr[index] = number%10;
        number/=10;
        index++;
    }
    int ten = 1;
    for (int i = index-1; i>=0; i--){
        ans = ans + arr[i]*ten;
        ten *=10 ;
    }
    return ans;
}