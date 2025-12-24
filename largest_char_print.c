#include <stdio.h>
int main (){
    char a[] ="salmany";;
    int sum =a[0];
    for(int i =0;i <7;i++){
        if(a[i]>sum){
            sum=a[i];
        }
    }
    printf("%c",sum);
}
