#include <stdio.h>
int fact(int n){
int i;
int factor=1;
for(i=1;i<=n;i++){
factor=factor*i;
}
return factor;
}
int fact_r(int n){
if(n==0)
return 1;
else
return n*fact_r(n-1);
}



int main()
{
int i;
printf("enter the number of which u want factorial");
scanf("%d",&i);

printf("factorial with recursion:%d\n", fact_r(i));
printf("factorial without recursion:%d\n",fact(i));
return 0;
}
  
