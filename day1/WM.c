#include<stdio.h>
void main()
{
int n;
printf("enter the input");
scanf("%d",&n);
if((n>0)&&(n<2000)){
printf("time estimate:25 minutes");
}
else if((n>2001)&&(n<4000)){
    printf("time estimate:35 minutes");
}
else if((n>4000)&&(n<7000)){
    printf("time estimate:45 minutes");
}
else{
    printf("invalid input");
}
}