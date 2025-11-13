#include <stdio.h>
int main(){
    int  num=12321;
    int count = 0;
    while (num>0)
    {
        num/=10;
        count+=1;
    }
    printf("%d",count);
    
}