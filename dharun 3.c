#include<stdio.h>
#include<stdlib.h>
void main()
{
    int nd ,sd,no,rem;
    printf("ENTER THE NUMBER:");
    scanf("%d",&no);
    nd=0;
    sd=0;
    while(no>0)
    {
        rem=no%10;
        nd=nd+1;
        sd=sd+rem;
        no=no/10;

    }
    printf("THE SUM OF THE DIGIT IS %d\n",sd);
    printf("THE NUMBER OF DIGIT IS %d",nd);
}

