#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
        int Cnt = 1, Num = 0, Sum = 0;

        printf("\n Enter Bill Amounts For Addition => ");
        printf("\n Note: Enter Zero to Stop Addition.\n");

        for(Cnt=1;;Cnt++)
        {
            printf("\n Enter Bill No %d = ", Cnt);
            scanf("%d",&Num);

            if (Num == 0)
            {
                break;

            }

            else if(Num < 0)
            {
                continue;
            }

            Sum = Sum + Num;
            Cnt++;
        }

        printf("\n Addition of Given Numbers is = %d.", Sum);

        getch();
        return 0;
}
