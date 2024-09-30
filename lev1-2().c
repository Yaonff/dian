#include <stdio.h>
int charge(int c)
{
    if (c==1||c==2||c==5)
    {
       return c ;/* code */
    }
    return 0;
}
int main()
{
  int Price,c;
  int change,sum=0;
  FILE*pFile=fopen("1-2.txt","r");
  if (pFile==NULL)
  {
    return  -1;
  }
 fscanf(pFile,"%d",&Price);
 printf("%d",Price);
  while (sum<Price)
  {
    scanf("%d",&c);
    if (charge(c)==0)
    {
       printf("error"); /* code */
    }
    else
       sum=sum+charge(c); 
  }
   change=sum-Price;
    printf("找零：%d",change);
    return 0;
}