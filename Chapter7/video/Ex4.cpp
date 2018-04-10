#include<iostream>

int main()
{
	int sum = 0;
	int a[10];
	for(int i = 0; i<10; i++)
	{
		a[i] = i;
		std::cout<<a[i]<<std::endl;
		sum = sum + a[i];
	}
	std::cout<<sum<<std::endl;
	return 0;
}