/*Write a program to define user defined functions
for following operations on an Array of elements
1.Small, 2.Large, 3.Sum and
4.Average.

input option(1/2/3/4), n and input 'n' integer values.

test case 1:
input=1
5
15 20 12 19 17
output=12

test case 2:
input=2
5
15 20 12 19 17
output=20

test case 3:
input=3
5
15 20 12 19 17
output=83

test case 4:
input=4
5
15 20 12 19 17
output=16.60
*/
#include <stdio.h>
int smallest(int a[],int n){
    int smallest=a[0];
    for(int i=0;i<n-1;i++){
        if(smallest>a[i+1]){
            smallest=a[i+1];
        }
    }
    return smallest;
}
int largest(int a[],int n){
    int largest=a[0];
    for(int i=0;i<n-1;i++ ){
        if(largest<a[i+1])
        largest=a[i+1];
    }
    return largest;
}
int sum(int a[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    return sum;
}
float average(int a[],int n){
    float average=(float)sum(a,n)/n;
    return average;
}
void main()
{
    int option,n;
    scanf("%d%d",&option,&n);
    int a[n];
    
    for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    switch(option){
        case 1:printf("%d",smallest(a,n));
        break;
        case 2:printf("%d",largest(a,n));
        break;
        case 3:printf("%d",sum(a,n));
        break;
        case 4:printf("%.2f",average(a,n));
        break;
        default:printf("Invalid");
    }
}
