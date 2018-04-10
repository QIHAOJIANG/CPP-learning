#include<iostream>

int main()
{
	int a,b;
	std::cout<<"user input:"<<std::endl;
	std::cin>>a>>b;
	int temp = a;
	a = b;
	b = temp;
	std::cout<<"result:"<<a<<" "<<b<<std::endl;
	return 0;
}