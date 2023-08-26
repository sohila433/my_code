#include <stdio.h>
#include <stdlib.h>
void sort(int arr[],int n){
for (int i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
        if(arr[j]<arr[j+1]){
            int temp =arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }

  }
}
int main()
{
  int arr[5];
  printf("enter 5 num \n");
  for(int i=0;i<5;i++){
    scanf("%d",&arr[i]);
  }
  printf("elements of arr   : ");
  for(int i=0;i<5;i++){
    printf("%d ",arr[i]);
  }
  printf("\n");

  int max_num=arr[0];
  int max_index=0;
  for(int i=1;i<5;i++){
    if(arr[i]>max_num){
       max_num=arr[i];
       max_index=i;
       }
  }
printf("max_num     : %d \n",max_num);
printf("max_index    : %d \n",max_index);

int min_num=arr[0];
  int min_index=0;
  for(int i=1;i<5;i++){
    if(arr[i]<min_num){
       min_num=arr[i];
       min_index=i;
       }
  }
printf("min_num    : %d \n",min_num);
printf("min_index     : %d \n",min_index);

    sort(arr,5);

  printf(" \n arr after sorting    : ");
  for(int i=0;i<5;i++){
    printf("%d",arr[i]);
  }
  printf("\n");
    return 0;
}
