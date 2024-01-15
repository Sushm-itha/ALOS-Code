#include <stdio.h>
#include <stdlib.h>
/*
int binaryIterative(int arr[],int n,int key)
{
    int first=0, last=n-1, mid;
    while(last>=first){
        mid=(first+last)/2;
        if(arr[mid]==key)
            return mid+1;
        else if(key>arr[mid])
            first=mid+1;
        else
            last=mid-1;
    }
    return -1;
}
*/
int binaryRecursive(int ar[],int no, int k, int fir, int las)
{
    fir=0; las=no-1; int midd;
    while(las>=fir){
      midd=(fir+las)/2;
       if(ar[midd]==k)
        return midd+1;
       else if(k>ar[midd])
        binaryRecursive(ar,no,k,midd+1,las);
       else
        binaryRecursive(ar,no,k,fir,midd-1);
    }
    return -1;
}
int main()
{
    int n,a[20],key,result,result1;
    printf("Enter the number of elements: \n");
    scanf("%d",&n);
    printf("Enter the elements of array: \n");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the number to be searched: ");
    scanf("%d", &key);
    //result=binaryIterative(a,n,key);
    result1=binaryRecursive(a,n,key,0,n-1);
    /*if(result==-1)
        printf("Number is not present in the array!\n");
    else
        printf("Number is present at position %d\n",result); */
    if(result1==-1)
        printf("Number is not present in the array!\n");
    else
        printf("Number is present at position %d\n",result1);
    return 0;
}
