#include<iostream>

int main()
{
	int x = 3;

	if(x == 0 || x == 6)
	{
		std::cout<<"at home"<<std::endl;
	}
	else if(x >= 1 && x <= 5)
	{
		std::cout<<"at office"<<std::endl;
	}
	else
	{
		std::cout<<"nothing"<<std::endl;
	}
	return 0;
}