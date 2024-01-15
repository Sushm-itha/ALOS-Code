#include <stdio.h>
#include <stdlib.h>
int linearSearch(int arr[],int n,int key)
{
    int i;
   for(int i=0;i<n;i++)
   {
       if(arr[i]==key)
       {
           return i+1;
           break;
       }
   }
   return -1;
}

int main()
{
    int n, a[20],key,res;
    printf("Enter the number of elements: \n");
    scanf("%d",&n);
    printf("Enter the array elements: \n");
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    printf("Enter the element to be searched: ");
    scanf("%d",&key);
    res=linearSearch(a,n,key);
    if(res==-1)
        printf("Element not found");
    else
        printf("Element is found at position %d \n",res);
    return 0;
}

