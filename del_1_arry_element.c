#include <stdio.h>
int main (){
    int del_index;
    int arr[]= {1,2,3,4,5};
    int temp;
    scanf("%d",&del_index);
    for(int i=0;i<5;i++){
        if(i==(del_index-1)){
            continue;
        }
        printf("%d",arr[i]);
    }
}
