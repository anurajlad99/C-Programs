#include<stdio.h>
#include<conio.h>

int main()
{
        int No = 0, cnt=0;

        printf("\n enter a number to print its table reverse = " );
        scanf("&d",&No);

        for (cnt = 10; cnt >= 1; cnt--)
        {
            printf("\n %-2d * %-2d = %-3d", No, cnt, (cnt*No));
        }

        getch();
        return 0;
}
