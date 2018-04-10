#include<iostream>

int main()
{
	int a = 25;
	int b = 39;
	std::cout<<"Input 1st number:"<<a<<std::endl;
	std::cout<<"Input 2nd number:"<<b<<std::endl;
	int temp = a;
	a = b;
	b = temp;
	std::cout<<"After swapping the 1st number is :"<<a<<std::endl;
	std::cout<<"After swapping the 1st number is :"<<b<<std::endl;
}