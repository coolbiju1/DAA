#include<stdio.h>

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
    for(int i=0;i<sizeof(ar)/sizeof(int);i++){
        if(ar[i]==ele){
            printf("Element found at %dth position");
        }
    }
    printf("Element NOT found!!");
}