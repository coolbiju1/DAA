//Linear Search
//Bijay Jena C2 21

#include<stdio.h>

int linear(int ar[],int ele,int n);

int main(){
    int n;
    printf("Input the length: ");
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    int ele;
    printf("Input element to search: ");
    scanf("%d",&ele);
    int ans;
    ans=linear(ar,ele,n);
    if(ans>0){
        printf("Element at %dth pos",ans);
    }else{
        printf("Element not found");
    }
}
int linear(int ar[],int ele,int n){
    for(int i=0;i<n;i++){
        if(ar[i]==ele){
            return i+1;
        }
    }
    return -1;
}