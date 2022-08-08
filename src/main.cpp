#include<stdio.h>
#include"main.h"


int add(int m,int n)
{
int sum = m+n;
return sum;

}
int main(){

	int a = 10;
	int b = 20;
	int c = add(a,b);
	
	printf("c = %d\n",c);
	return 0;

}
