#include <stdio.h>
int fact(int n)
{
    int f=1,i;
    for(i=1;i<=n;i++){
        f*=i;}
    
    return f;
}
void main(){
    int n;
    scanf("%d",&n);
    printf("%d",fact(n));
}