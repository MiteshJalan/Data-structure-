#include <stdio.h>
#include <math.h>
int main() {
int a;
scanf("%d\n",a);
int dig=log10(a)+1;
int arr[100];
for (size_t i = dig-1; i >0; i--) {
arr[i]=a%10;
  a=a/10;
}

int count=0;
for (size_t i = 0; i < dig; i++) {
  /* code */
  if (arr[i]%2==0) {
    count++;
    /* code */
  }
}
printf("%d\n",count);
  return 0;
}
