#include<stdio.h>
 int main()
 {
    int arr[7]={8,5,7,1,9,12,10};
    int i,j,temp;

    for(i=0;i<=6;i++)
    {
        for(j=i+1;j<=6;j++)

        if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
    
    
    printf("%d ,",arr[i]);
    }
    return 0;
 }