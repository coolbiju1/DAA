//Binary search
//Bijay Jena C2 21

#include<stdio.h>
int binary(int ar[],int ele,int n,int beg,int mid,int end);

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
    int beg=0,end=n,mid=n/2;
    int ans=binary(ar,ele,n,beg,mid,end);
    if(ans>0){
        printf("Element at %dth pos",ans+1);
    }else{
        printf("Element not found");
    }
}
int binary(int ar[],int ele,int n,int beg,int mid,int end){
    if(ar[mid]>ele){
        return binary(ar,ele,n,beg,(beg+mid)/2,mid);
    }else if(ar[mid]<ele){
        return binary(ar,ele,n,mid,(mid+end)/2,end);
    }else if(ar[mid]==ele){
        return mid;
    }else{
        return -1;
    }
}
