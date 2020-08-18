#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	int search=5;
	
	if(binary_search(arr, arr+n, search)) 
	{
		cout<<"number is found"<<endl;
	}
	else
	{
		cout<<"number is not found"<<endl;
	}
	
	return 0;
}
