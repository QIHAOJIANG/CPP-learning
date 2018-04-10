#include<iostream>

int main()
{
	int sum;
	int a[100];
	for(int i; i<= 100; i++)
	{
		if(i%2 == 0)
		{
			continue;
		}
		a[i] = i;
		sum = sum + a[i]*a[i];
	}
	std::cout<<sum<<std::endl;
	return 0;
}