#include<stdio.h>
 
 void main(){
	int a = 55;
	int *p;
	p = &a;
	printf("%d\n",p);
	printf("%d\n",*p); // derefrencing 
	printf("%d\n",&a); // &= gives you adress of  
 }
