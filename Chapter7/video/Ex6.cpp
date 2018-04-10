#include<iostream>

int main()
{
	int sum;
	for(int i; i<=100; i++)
	{
		if(i % 2 == 0)
		{
			continue;
		}
		sum = sum + i*i;
	}
	std::cout<<sum<<std::endl;
	return 0;
}