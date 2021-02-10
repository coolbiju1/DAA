//Factorial with recursion
//Bijay Jena C2 21

#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int ans=Factorial(n);
    printf("Ans: %d",ans);
    return 0;
}
int Factorial(int n){
    if(n==1) return 1;
    return n*Factorial(n-1);
}