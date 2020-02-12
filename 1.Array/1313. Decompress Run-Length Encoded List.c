#include <stdio.h>
int main() {
  int a[4]={2,3,2,5};
  int n=4;
  int x=0;
  int temp[4];
  for (int i = 0; i < n-1; i+=2)
  {
    printf("value of i=%d\n",i);
    int freq=a[i];
    int val=a[i+1];
      while(freq!=0)
      {
        temp[x]=val;
        printf("value of temp=%d\n",temp[x] );
        freq--;
        x++;
      }
    }
    for (int i = 0; i < 4; i++)
     {
        printf("%d\n",temp[i]);
    }
  return 0;
}
