#include<stdio.h>
#include<conio.h>

int main()
{
        int No = 0, Temp = 0, Rev = 0;

        printf("\n Enter a +ve Integer Number TO Reverse It = ");
        scanf("%d",&No);


        for(Temp = No; Temp > 0; Temp /=10)
        {
            Rev = (Rev * 10) + (Temp % 10);

        }

        printf("\n Reverse of Given Number %d is = %d.", No, Rev);

        getch();
        return 0;
}
