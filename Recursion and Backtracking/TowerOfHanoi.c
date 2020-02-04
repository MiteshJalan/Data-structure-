#include <stdio.h>
void Tower(int n,char frompeg,char toppeg,char auxpeg/* arguments */)
{
  /* code */
  if (n==1)
  {
    printf("Move disk 1 from peg %c to %c\n",frompeg,toppeg);
    /* code */
  }
  Tower(n-1,frompeg,toppeg,auxpeg);
  printf("move disk %d from peg %c to peg %c \n",n,frompeg,toppeg);
  Tower(n-1,auxpeg,toppeg,frompeg);
}
int main(/* arguments */) {
  /* code */
  int n;
  scanf("%d\n",&n);
  char A,B,C;
  Tower(n,A,B,C);
  return 0;
}
