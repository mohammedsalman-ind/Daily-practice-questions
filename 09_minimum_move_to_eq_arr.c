#include <stdio.h>
int main (){
    int mx=0;
    int count=0;
    int arr[3]={1,1,1};
    for(int i=0;i<3;i++){
        if(arr[i]>mx){
            mx=arr[i];
        }
    }
    for(int i=0;i<3;i++){
        do
        {
            if(arr[i]!=mx){
                arr[i]+=1;
                count+=1;
            }
        } while(mx!=arr[i]);
        
    }
    printf("%d",count);

}