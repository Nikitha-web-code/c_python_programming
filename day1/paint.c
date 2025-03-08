#include<stdio.h>
void main()
{
int n,m,i;
float area,total=0;
printf("enter the value of n");
scanf("%d",&n);
printf("enter the value of m");
scanf("%d",&m);
for(int i=0;i<n;i++)
{
    printf("%d",i+1);
    scanf("%f",area);
    total+=area*18;
}
for(int i=0;i<m;i++)
{
    printf("%d",i+1);
    scanf("%f",area);
    total+=area*12;
}
printf("total cost of walls %d,%d",n,m);
}
