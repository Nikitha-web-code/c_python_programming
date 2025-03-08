#include<stdio.h>
void main()
{
int N=10,k=5,n;
printf("enter input");
scanf("%d",&n);
if(N>n-k||n<=0)
{
    printf("invalid input");
    printf("\nNumber of candies remaining %d",N);
}
else
{
    printf("Number of candies sold %d",n);
    if(N-n<=k)
    {
        N=10;
        printf("\nNumber of candies remaining %d",N);
    }
    else
    {
        printf("\nNumber of candies remaining %d",N-n);

    } 
    }
   
}
