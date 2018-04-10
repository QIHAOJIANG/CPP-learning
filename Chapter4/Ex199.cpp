#include<iostream>

int main()
{
	int numbers[3];
	std::cout<<"input a number"<<std::endl;
	std::cin>>numbers[0];
	std::cout<<"input a number"<<std::endl;
	std::cin>>numbers[1];
	std::cout<<"input a number"<<std::endl;
	std::cin>>numbers[2];
	std::cout<<"now we have:"<<numbers[0]<<" "<<numbers[1]<<" "<<numbers[2]<<std::endl;
	return 0;
}