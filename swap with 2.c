#include<stdio.h>
main() {
	
	int a;
	int b;
	
	printf("Input A Value : ");
	scanf("%i",&a);	
	
	printf("Input B Value : ");
	scanf("%i",&b);	
	
	a=a-b;
	b=a+b;
	a=b-a;
	
	
	printf("A : %i\n",a);
	printf("B : %i\n",b);
}
