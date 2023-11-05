#include<stdio.h>
#include<math.h>
int m = 0;
int num_invers(int num){
    if (num>0)
    {
        while (num)
    {
       m= m*10+num%10;
       num /=m;
    }
    }else {return 0;}
    
  
    
}