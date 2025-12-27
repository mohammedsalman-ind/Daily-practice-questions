#include <stdio.h>
int main (){
    int arr[3]={1,2,3};
    int *p=arr;
    int sum=0;
    for(int i =0;i<3;i++){
        sum +=*(p+i);
    }
    printf("%d",sum);
}
