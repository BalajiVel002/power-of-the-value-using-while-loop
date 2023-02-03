#include<stdio.h>
#include<stdlib.h>
void main()
{
  int i,j;
  for(i=1;i<=0;i++){
    for (j=2;j<1;j++){
        if(i+j==0)
            break;
        else
            printf("%d",i);
            break;
    }
  }
}
