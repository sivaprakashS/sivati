#include <stdio.h>
int main() 
{
int a,b,c;
printf("enter the a,b values");
scanf("%d",&a,&b);
 printf("\nenter the odd no or even num a,b");
 for(c=a;c<=b;c++)
 {
 	if(c%2==0)
 	{
 	printf("%d\t",c);
 }
 }
	return 0;
}
