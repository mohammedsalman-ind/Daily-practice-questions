#include <stdio.h>

int main() {
    int a[2][3]={1,2,3,4,5,6};// full initialisation
    for(int i =0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    // if jyda element dale to warning ata hai 
    //if kam ho to 0
}