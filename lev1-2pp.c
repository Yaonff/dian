#include <stdio.h>
int main()
{
    int c,d,Price;
    int sum,change=0;
    scanf("%d",&Price);
    scanf("%d",&c);
    switch (c)
    {
    case 1/* constant-expression */:
       while (sum+c<Price)
     {
      scanf("%d",&d);
      sum=sum+d; 
     }
       change=sum+c-Price;
       printf("找零：%d",change); /* code */
        break;
    case 2:
      while (sum+c<Price)
     {
      scanf("%d",&d);
      sum=sum+d; 
     }
      change=sum+c-Price;
      printf("找零：%d",change);
      break;
    case 5:
      while (sum+c<Price)
     {
      scanf("%d",&d);
      sum=sum+d; 
     }
      change=sum+c-Price;
      printf("找零：%d",change);
      break;
    default:
        printf("error");
        break;
    }
    return 0;
}