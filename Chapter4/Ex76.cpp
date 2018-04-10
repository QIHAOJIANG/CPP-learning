#include<iostream>

int main()
{
	int arr[3] = {4,5,6};
	int temp = arr[0];
	arr[0] = arr[2];
	arr[2] = temp;
	std::cout<<arr[0]<<std::endl<<arr[1]<<std::endl<<arr[2]<<std::endl;
	return 0;
}