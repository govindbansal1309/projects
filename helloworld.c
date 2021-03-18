#include<stdio.h>
int myfun(int z)
{
  //this function is added from windows. it returns square of z. 
  return z*z;
}
int main()
{
  printf("Hello world\n");
  // new updates from linux
  int x = 2, y = 3;
  int z = x+y;
  printf("\n%d", myfun(z));
  return 0;
}
