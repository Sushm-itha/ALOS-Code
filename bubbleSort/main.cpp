#include<stdio.h>
#include<stdlib.h>
int bubbleSort(int arr[],int n)
{
    int temp,i,j;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

int main(){
    int n,a[10],i;
    printf("Enter the number of elements: \n");
    scanf("%d",&n);
    printf("Enter the elements to sort: \n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    bubbleSort(a,n);
    printf("The sorted elements are: \n");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
}
