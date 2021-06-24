#include<stdio.h>
#include<conio.h>

int main()
{
        int No = 0, Temp = 0,  Cnt = 0;

        printf("\n Enter  Number TO Find No Of Digits = ");
        scanf("%d",&No);

        Temp = No;


        while(Temp > 0)
        {
           Temp = Temp / 10;
           Cnt++;
        }

        printf("\n Count of Digits in %d is = %d.", No, Cnt);

        getch();
        return 0;
}

