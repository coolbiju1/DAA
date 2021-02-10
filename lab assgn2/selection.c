//Bijay Kumar Jena C2 21
//Selection Sort

#include<stdio.h>

void selection(int ar[],int n);

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
    selection(ar,n);
    for(i=0;i<n;i++){
        printf(" %d",ar[i]);
    }
    return 0;
}

void selection(int ar[],int n){
    int i,j,min;
    for(j=0;j<n;j++)
    {
        min=j;
        for(i=j;i<n;i++){
            if(ar[min]>ar[i]) min=i;
        }
        int temp=ar[min];
        ar[min]=ar[j];
        ar[j]=temp;
    }
}
