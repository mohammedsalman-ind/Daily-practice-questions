#include <stdio.h>
#include <stdlib.h>
int main (){
    int num;
    scanf("%d",&num);
    FILE * fp;
    fp= fopen("inputnum.txt","w");
    if(fp==NULL){
        exit(1);
    }
    for (int i = 0; i < num; i++)
    {
        fprintf(fp,"%d",i);
    }
    
}
