//Bijay Kumar Jena C2 21
//Insertion Sort

#include<stdio.h>

void insertion(int ar[],int n);

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
    insertion(ar,n);
    for(i=0;i<n;i++){
        printf(" %d",ar[i]);
    }
    return 0;
}

void insertion(int ar[],int n){
    int i,j,k;
    for(i=0;i<n;i++){
        k=ar[i];
        j=i-1;
        while(j>=0 && ar[j]>k){
            ar[j+1]=ar[j];
            j-=1;
        }
        ar[j+1]=k;
    }
}
