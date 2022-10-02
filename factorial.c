//  a c program to find the factorial of a given number.

#include<stdio.h>
int main()
{
	int i,n,fact = 1;
	printf("Enter the number :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact = fact*i;
	}
	printf("The factorial of the given number : %d",fact);
}


/*(in linux terminal)
for compiling : cc factorial.c
for execution : ./a.out
OUTPUT :
Enter the number :5
The factorial of the given number : 120
*/
