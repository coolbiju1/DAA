//Factorial without recursion
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
    int res=1;
    for(int i=2;i<=n;i++){
        res*=i;
    }
    return res;
}
