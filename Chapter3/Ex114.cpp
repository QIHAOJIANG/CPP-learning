#include<iostream>
#include<iomanip>

int main()
{
	int yyyy,mm,dd;
	std::cout<<"Input year:";
	std::cin>>yyyy;
	std::cout<<"Input month:";
	std::cin>>mm;
	std::cout<<"Input day:";
	std::cin>>dd;
	std::cout<<"The data is:"<<yyyy<<"-"<<mm<<"-"<<dd<<std::endl;
	return 0;
}