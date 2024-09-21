#include<stdio.h>
char name[6]={ 'n','n','n','n','n','n'};
    int  price[6];
    int  gross[6];
    int  arr1[6][2];
     int  arr2[6][2];
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
    static int step=1;
    int C,c,d;
    int sum,change,Total=0;
    int i,j=1;
    char Name1,Name2;
    int Numb1,Numb2,Gross,Price,Amount;
    while(1)
    {
        switch (step)
        {
        case 1: while(1) 
                {
                    char a=getchar();
               if (a=='\n')  a=getchar();
                if (a=='E')
                 {
                  char c=getchar();
                  if (c=='N')  
                  {
                    getchar();
                   step=2 ;
                   break;
                  }
                 }
                scanf("%d",&Numb1);
                if ( Numb1<1||Numb1>5||name[Numb1]!='n')
                {
                  printf("输入货架有误") ;
                 continue; 
                }
               else
              {
                name[Numb1]=a;
                scanf("%d %d",&price[Numb1],&gross[Numb1]);
              }
              
                }
        case 2: while(1)
        {
             char b=getchar();
                if (b=='\n') b=getchar();
                if (b=='b')
                {
                    getchar();
                    getchar();                   
                    getchar();
                     i--;
                    if (i==0)
                    {
                     printf("不可撤销");
                     i++; /* code */
                    }
                    
                    Total=Total-price[arr1[i][0]]*arr1[i][1];
                    continue;
                }
                if (b=='E')
               {
                 char d=getchar(); 
                   if (d=='N')
                   {
                    getchar();
                    step=3;
                    break;
                   }
                 else 
                 {
                    scanf("%d %d",&Numb2,&Amount);
                    if(Amount<=gross[Numb2])  
                    {
                     arr1[i][0]=Numb2;
                     arr1[i][1]=Amount;
                     i++;
                    Total=price[Numb2]*Amount+Total;
                    }
                    else
                   {
                   printf("货物不足");
                    continue;
                   }
                 }
               }
               scanf("%d %d",&Numb2,&Amount);
               if(Amount<=gross[Numb2]) 
              {
                if (i==4)
                {
                   arr1[1][0]=arr1[2][0];
                   arr1[1][1]=arr1[2][1];
                   arr1[2][0]=arr1[3][0];
                   arr1[2][1]=arr1[3][1];
                   arr1[3][0]=Numb2;
                   arr1[3][1]=Amount;
                }
                 else
                 {
                     arr1[i][0]=Numb2;
                     arr1[i][1]=Amount;
                     i++;
                 }
                Total=price[Numb2]*Amount+Total;
              }
               else
                   {
                   printf("货物不足");
                    continue;
                   }
                
         } 
                
        case 3: while (1)
        {
            scanf("%d",&C);
            if (charge(C)==0)
            {
                printf("error");
                continue;
            }
            else  sum=sum+C;
            if (sum>=Total)
            {
                change=sum-Total;
                printf("找零：%d",change);
                step=2;
                break;
            }
            if (gross[1]==0&&gross[2]==0&&gross[3]==0&&gross[4]==0&&gross[5]==0)
            {
               printf("等待存放");
               step=1;
               break;
            }
            
        }
      }
    }
  return 0;
}
