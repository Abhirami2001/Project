Digital clock


#include <stdio.h>
#include <stdlib.h>

int main()
{
  int h, m, s;
  int d=1000;
  printf("Set time:\n");
  printf("Enter hour:\n");
  scanf("%d",&h);
  printf("Enter minute:\n");
  scanf("%d",&m);
  printf("Enter second:");
  scanf("%d",&s);
  if(h>12||m>60||s>60)
  {
    printf("error! \n");
    exit(0);
  }
  while (1)
  {
    s++;
    if(s>59)
    {
      m++;
      s=0;
    }
    if(m>59)
    {
      h++;
      m=0;
    }
    if(h>12)
    {
      h=1;
    }
    printf("\n clock:");
    printf("\n%0.2d:%0.2d:%0.2d",h,m,s);
    sleep(d);
    system ("cls");
    
   
  }
  
}
