#include<iostream>

int sum(int a, int b)
{
	int sum = a + b;
	return sum;
}

int main()
{
	std::cout<<"The sum of 29 and 30 is:"<<sum(29,30)<<std::endl;
	return 0;	
}