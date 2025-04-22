#include<stdio.h> 
int main(void){
	double x;
	int n=0;
	for(x=2;x>0.01;x *=0.5)
	{
		n++;	
	}
	printf("%d",n);
	return 0;
}
