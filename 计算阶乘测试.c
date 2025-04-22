#include<stdio.h>
int factor(int n1);
int main(){
	int n1,m; 
	scanf("%d",&n1);
	m=factor(n1);
	printf("%d",m);
	return 0;
}
int factor(int n1)
{
	int i,m;
	for (i=1,m=1;i<=n1;i++)
	{
		m=m*i;
	}
	return m;
}

