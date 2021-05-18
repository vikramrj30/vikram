#include<stdio.h>
main()
{
int n;
printf(“\n enter the marks:”);
scanf(“%d”,&n);
if(n>89)
printf(“O”);
else if(n>79)
printf(“E”);
else if(n>69)
printf(“A”);
else if(n>59)
printf(“B”);
else if(n>49)
printf(“C”);
else if(n>39)
printf(“D”);
else
printf(“F”);
}
