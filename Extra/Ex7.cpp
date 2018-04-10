#include<iostream>

int main()
{
	int a = 5;
	int b = 7;
	float c = 3.7;
	float d = 8.0;
	std::cout<<"5 + 7 ="<<" "<<a+b<<std::endl;
	std::cout<<"3.7 + 8.0 ="<<" "<<c+d<<std::endl;
	std::cout<<"5 + 8.0 ="<<" "<<a+d<<std::endl;
	std::cout<<"5 - 7 ="<<" "<<a-b<<std::endl;
	std::cout<<"3.7 - 8.0 ="<<" "<<c-d<<std::endl;
	std::cout<<"5 - 8.0 ="<<" "<<a-d<<std::endl;
	std::cout<<"5 * 7 ="<<" "<<a*b<<std::endl;
	std::cout<<"3.7 * 8.0 ="<<" "<<c*d<<std::endl;
	std::cout<<"5 * 8.0 ="<<" "<<a*d<<std::endl;
	std::cout<<"5 / 7 ="<<" "<<a/b<<std::endl;
	std::cout<<"3.7 / 8.0 ="<<" "<<c/d<<std::endl;
	std::cout<<"5 / 8.0 ="<<" "<<a/d<<std::endl;
	return 0;
}
