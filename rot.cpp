

#include<iostream>
#include<cstdlib>
void rotate(int *,int,int);

int main()
{
	int *ptr,d,num;
	std::cout<<"Enter no. of elements:";
	std::cin>>num;
	ptr=(int*)malloc(num*sizeof(int));

	std::cout<<"Enter elements:\n";
	for (int i = 0; i < num; ++i)
	{
		std::cin>>*(ptr+i);
	}
	
	
	std::cout<<"Enter no. by which rotation of elements:";
	std::cin>>d;


	 rotate(ptr,d,num);
	
	std::cout<<"After rotation  array is:\n";
	for (int i = 0; i < num; ++i)
	{
		std::cout<<*(ptr+i)<<std::endl;
	}
	return 0;
} 

void rotate(int *ptr,int d,int num)
	{
		
	int *temp;
	temp=(int*)malloc(d*sizeof(int));

	for (int i = 0; i < d; ++i)
	{
		*(temp+i)=*(ptr+i);
	}
	for (int i = 0; i < (num-d); ++i)
	{
		*(ptr+i)=*(ptr+i+d);
		
	}
	int r=(num-d);
	int j=0;
	for (int i =r; i < num; ++i,j++)
		{
			*(ptr+i)=*(temp+j);

		}
	}
