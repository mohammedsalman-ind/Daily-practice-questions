#include <stdio.h>
void table(int x, int y){
    if(x>11){
        return ;
    }
    else{
        printf("%d",y*x);
        printf("\n");
        table(x+1,y);
    }
}
int main(){
    (table(1,5));
}