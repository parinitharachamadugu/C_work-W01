#include <stdio.h>
int main(void)
{
  int n,m,r;
  scanf("%d %d",&m,&n);

  r = m % n;
  printf("%d \n",r);

  if (r==1)
  {
    printf("1");
  }
  else
  {
    printf("0");
  }
}