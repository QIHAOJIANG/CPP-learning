#include<iostream>
#include<limits>

int main()
{
	std::cout<<"The maximum limit of int data type :"<<std::numeric_limits<int>::max()<<std::endl;
	std::cout<<"The minimum limit of int data type :"<<std::numeric_limits<int>::min()<<std::endl;
	std::cout<<"The maximum limit of unsigned int data type :"<<std::numeric_limits<unsigned int>::max()<<std::endl;
	std::cout<<"The maximum limit of long long data type :"<<std::numeric_limits<long long>::max()<<std::endl;
	std::cout<<"The minimum limit of long long data type :"<<std::numeric_limits<long long>::min()<<std::endl;
	std::cout<<"The maximum limit of unsigned long long data type :"<<std::numeric_limits<unsigned long long>::max()<<std::endl;
	std::cout<<"The maximum limit of char data type :"<<std::numeric_limits<char>::max()<<std::endl;
	std::cout<<"The minimum limit of char data type :"<<std::numeric_limits<char>::min()<<std::endl;
	std::cout<<"The maximum limit of signed char data type :"<<std::numeric_limits<signed char>::max()<<std::endl;
	std::cout<<"The minimum limit of signed char data type :"<<std::numeric_limits<signed char>::min()<<std::endl;
	std::cout<<"The maximum limit of unsigned char data type :"<<std::numeric_limits<unsigned char>::max()<<std::endl;
	std::cout<<"The minimum limit of short data type :"<<std::numeric_limits<short>::min()<<std::endl;
	std::cout<<"The maximum limit of short data type :"<<std::numeric_limits<short>::max()<<std::endl;
	std::cout<<"The maximum limit of unsigned short data type :"<<std::numeric_limits<unsigned short>::max()<<std::endl;
	return 0;
}