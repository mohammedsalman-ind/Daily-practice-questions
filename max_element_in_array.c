#include <stdio.h>
int main() {
int a[5]={1,2,3,1,4},max=0;
for(int i=0;i<=4;i++)
{
    if (max<a[i])
    {
        max=a[i];
    }
}
printf("%d",max);
}
