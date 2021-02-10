//Bijay Kumar Jena C2 21
//Power with recursion

#include<stdio.h>

int Power(int n,int p);

int main(){
    int n,p;
    scanf("%d%d",&n,&p);
    printf("Ans: %d",Power(n,p));
    return 0;
}
int Power(int n,int p){
    if(p==0){
        return 1;
    }
    return n*Power(n,p-1);
}
