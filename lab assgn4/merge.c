//Merge Sort
//Bijay Kumar Jena C2 21

#include <stdio.h>
#include <stdlib.h>
void merge_sort(int[],int,int);
void merge(int[],int,int,int);

int main()
{
    int n,i,a[10];
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    merge_sort(a,0,n-1);
    printf("Sorted Array: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
void merge_sort(int a[],int low,int high)
{
    int mid;
    if(low < high)
    {
        mid = (low+high)/2;
        merge_sort(a,low,mid);
        merge_sort(a,mid+1,high);
        merge(a,low,high,mid);
    }
    else
    {
        return;
    }
}
void merge(int a[],int low,int high,int mid)
{
    int i,j,k,arr[10];
    for(i=low,j=mid+1,k=low;i<=mid && j<=high;k++)
    {
        if(a[i]<=a[j]){
            arr[k]=a[i];
            i++;
        }
        else{
            arr[k]=a[j];
            j++;
        }
    }
    while(i<=mid)
    {
        arr[k]=a[i];
        k++;
        i++;
    }
    while(j<=high)
    {
        arr[k]=a[j];
        k++;
        j++;
    }
    for(i=low;i<=high;i++)
    {
        a[i]=arr[i];
    }
}
