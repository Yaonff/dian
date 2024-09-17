#include <stdio.h>
int main()
{
    char Name;
    int Numb,Gross,Price,i;
    scanf("%c %d %d %d",&Name,&Numb,&Price,&Gross);
    printf("%d:",Numb);
    for ( i = 0; i < Gross; i++)
    {
        printf("%c",Name);/* code */
    }
    printf(" %d",Price);
    return 0;

}