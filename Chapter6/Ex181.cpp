#include<iostream>

int main()
{
	unsigned short year;
	std::cout<<"year:"<<std::endl;
	std::cin>>year;
	unsigned char month;
	std::cout<<"month:"<<std::endl;
	std::cin>>month;
	unsigned char day;
	std::cout<<"day:"<<std::endl;
	std::cin>>day;
	std::cout<<"The date is:"<<year<<" "<<month<<" "<<day<<std::endl;
	return 0;
}