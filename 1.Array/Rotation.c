#include<stdio.h>
void rotate(int a[5],int k);
void main()
{
  int arr[5]={1,2,3,4,5};

  int k;
  scanf("%d\n",&k);
  for(int i=0;i<k;i++){
  rotate(arr,sizeof(arr));}
}
int rotate(int a[5],int n)
{
    int temp;
    for (int i = 0; i < n-1; i++)
    {
      temp=a[0];
      a[i]=a[i+1];
      a[n]=temp;
        /* code */
    }
    return a;
}
