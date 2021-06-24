#include<stdio.h>
#include<conio.h>

int main()
{
      int i,j;
      int Num;

      for (i=11; i<=20; i++)
     {
        Num=i;
        for (j=1; j<=10; j++)
        {
            printf("%3d\t",(Num*j));
        }
        printf("\n");
     }
        getch();
        return 0;
 }
