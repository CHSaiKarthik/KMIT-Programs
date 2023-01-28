#include <stdio.h>                       

int add(int a,int b){
    return a+b;
    
}
int sub(int a,int b){
    return a-b;
    
}
int mult(int a,int b){   
    return a*b;
    
}
float quo(float a,float b){
    return a/b;
    
}
int rem(int a,int b){
    return a%b;
    
}

void main(){
    int a,b,c;
    scanf("%d",&c);
    scanf("%d%d",&a,&b);
    switch(c){
        case 1:printf("%d",add(a,b));
        break;
        case 2:printf("%d",sub(a,b));
        break;
        case 3:printf("%d",mult(a,b));
        break;
        case 4:printf("%.2f",quo(a,b));
        break;
        case 5:printf("%d",rem(a,b));
        break;
    }
    
}