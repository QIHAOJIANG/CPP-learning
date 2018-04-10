#include<iostream>

int main()
{
	int x;
	std::cout<<"Input mark"<<std::endl;
	std::cin>>x;
	if(x<60)
	{
		std::cout<<"C"<<std::endl;
	}
	else if(x<90)
	{
		std::cout<<"B"<<std::endl;
	}
	else
	{
		std::cout<<"A"<<std::endl;
	}
	return 0;
}