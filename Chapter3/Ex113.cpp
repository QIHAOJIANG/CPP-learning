#include<iostream>
#include<iomanip>

int main()
{
	double a;
	std::cout<<"Input a:"<<std::endl;
	std::cin>>a;
	std::cout<<"result:"<<std::setprecision(2)<<std::fixed<<a*a*a<<std::endl;
	return 0;
}