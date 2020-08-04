#include<stdio.h>
int main()
{
    int arr[]={2,7,1,4,1,7,8,2,8};
    int n= sizeof(arr)/sizeof(arr[0]);
    int count=0;
    int count1=0;
    for(int i=0;i<n;i++)
    {
       arr[arr[i]%n]+=n;
    }
    for(int i=0;i<n;i++)
    {
    int count=0;
    count=arr[i]/n;
    if(count>1)
    {
    printf("Frequency of %d is %d times \n",i,count);
    }
    }

    for(int i=0;i<n;i++)
    {
       arr[i]=arr[i]%n;
    }
    }
