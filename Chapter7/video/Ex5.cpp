#include<iostream>

int main()
{
	int accout = 0;
	for(int i = 0; i<=100; i++)
	{
		if(i%2 != 0)
		{
			continue;   //后面的语句跳过，继续下一轮
		}
		std::cout<<i<<std::endl;
		accout ++;
	}
	std::cout<<accout<<std::endl;
	return 0;
}