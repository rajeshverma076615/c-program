#include <stdio.h>
#include<stdlib.h>
#include<allloc.h>
int main(int argc, char const *argv[])
{
	int n,*p,i,sum=0;
	printf("how many no you want?\n");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	if(p=NULL)
	{
		printf("insufficient memory\n");
		exit(1);
	}
	for(i=0;i<n;i++)
	{
		printf("Enter no:\n");
		scanf("%d",p+i);
	}
	for (int i = 0; i < n; ++i)
	{
		/* code */printf("%d\n",*(p+i) );
		sum=sum+*(p+i);
	}
	free(p);
	printf("sum is %d \n",sum);
	printf("avg is %f\n",(float)sum/n );
	return 0;
}