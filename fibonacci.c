#include <stdio.h>
#include <stdlib.h>
int main()
{
   int t1=-1, t2=1,n,fib,i=1;
   printf("enter the number\n");
   scanf("%d",&n);
   printf("Fibonacci series:");
   while(i<=n)
  {
	fib=t1+t2;
	printf("%d\t",fib);
	t1=t2;
	t2=fib;
	i++;
   }
printf("\n");
return 0;
}
