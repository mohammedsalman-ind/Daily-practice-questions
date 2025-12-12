// Write a program to copy the contents of one file to another without using fgets() or fputs() 
#include <stdio.h>
#include <stdlib.h>
int main (){
    int num;
    FILE * sp;
    FILE * op;
    op=fopen("inputnum.txt","r");
    sp=fopen("New_homewor.txt", "w");
        if(sp==NULL){
        exit(1);
    }
    fscanf(op,"%d",&num);
    fprintf(sp,"%d",num);
    fclose(sp);
    fclose(op);
}
