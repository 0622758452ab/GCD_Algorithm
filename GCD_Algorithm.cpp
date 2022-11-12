#include<stdio.h>

int gcd(int a,int b){
    if(a == 0)return b;
    else gcd(b%a,a);
}

int main(){
    int a , b;
    printf("Enter number 1 :");
    scanf("%d",&a);
    printf("Enter number 2 :");
    scanf("%d",&b);
    int sum = gcd(a,b);
    printf("GCD : %d",sum);
    return 0;
}

