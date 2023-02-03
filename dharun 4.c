#include<stdio.h>
#include<stdlib.h>
int main()
{
    int no,nd,sd,rem,rev;
    printf("ENTER THE NUMBER:");
    scanf("%d",&no);
    nd=0;
    sd=0;
    rev=0;
    while(no>1)
    {
        rem=no%10;
        nd=nd+1;
        sd=sd+rem;
        no=no/10;
        rev=rev*10+rem;
        printf("sum %d\n",sd);
        printf("number %d\n",nd);
        printf("reverse %d",rev);
    }
}
