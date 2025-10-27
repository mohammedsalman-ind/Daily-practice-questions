#include <stdio.h>
int main(){
    int num,rem,temp;
    int rev=0;
    int count=0;
    printf("Enter a number ","\n");
    scanf("%d",&num);
    temp=num;
    while (temp > 0) {
    rem = temp % 10;
    rev = rev * 10 + rem;
    temp /= 10;
}
printf("%d", rev);
    
}