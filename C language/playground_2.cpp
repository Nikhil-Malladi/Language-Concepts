#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int inp,cnt;
    scanf("%d",&inp);
    for(int x=inp;x>=1;x--)
    {
        for(int i=inp;i>=1;i--)
            {
                printf("%d ",i);
            }
        for(int j=2;j<=inp;j++)
            {
                printf("%d ",j);
            }
    printf("\n");
    }
    for(int y=2;y<=inp;y++)
        {
        for(int i=inp;i>=1;i--)
            {
                printf("%d ",i);
            }
        for(int j=2;j<=inp;j++)
            {
                printf("%d ",j);
            }
    printf("\n");
    }
}

