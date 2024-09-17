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
    int c;
    int sum,change=0;
    char Name1,Name2;
    int Numb1,Numb2,Gross,Price,i,Amount,Total;
    scanf("%c %d %d %d",&Name1,&Numb1,&Price,&Gross);
  while (Gross>0)
  {
    scanf("\n%c %d %d",&Name2,&Numb2,&Amount);
    Total=Price*Amount;
  
    if ((Name1==Name2)&&(Numb1==Numb2)&&(Gross>=Amount))
   {
     while (sum<Total)
  {
    scanf("%d",&c);
    if (charge(c)==0)
    {
       printf("error"); 
       continue;/* code */
    }
    else
       sum=sum+charge(c); 
  }
   change=sum-Total;
   printf("找零：%d",change);
    sum=0;
   }
  else
  {
     printf("购买失败");
     continue;
  }
   Gross=Gross-Amount;
  }
 printf("\n 售罄");
 return 0;
}