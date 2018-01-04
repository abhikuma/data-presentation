#include<stdio.h>
int main()
{

    int i,arr[100],j,flag=1,n,temp;
    printf("Enter the no of size of array :   ");
    scanf("%d",&n);
    printf("Enter the array element :   ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
        printf("%d\n",arr[i]);
      for(i=1;i<n;i++)
      {
          temp=arr[i];
          j=i-1;
          while(j>=0 && arr[j]>temp)
          {
              arr[j+1]=arr[j];
              j--;
          }
          arr[j+1]=temp;
      }
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
return 0;
}

