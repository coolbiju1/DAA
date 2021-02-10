//Bijay Kumar Jena C2 21
//Bubble Sort

#include<stdio.h>

void bubble(int ar[],int n);

int main(){
    int n,i;
    printf("Input size: ");
    scanf("%d",&n);
    int ar[n];
    printf("Input elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    printf("Array after sorting:");
    bubble(ar,n);
    for(i=0;i<n;i++){
        printf(" %d",ar[i]);
    }
    return 0;
}

void bubble(int ar[],int n){
    int i,j;
    for(i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(ar[j]>ar[j+1]){
                int temp=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;
            }
        }
    }
}

