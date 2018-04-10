#include<iostream>

int main()
{
	int arr[4] = {1,3,4};
	arr[3] = arr[2];
	arr[2] = arr[1];
	arr[1] = 2;
    std::cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<" "<<arr[3]<<std::endl;
    return 0;
}