#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"enter n: ";
	cin>>n;
	
	int* arr = new int[n];
	
	int sum =0;
	
	for(int i =0; i<n; i++){
		cin>>arr[i];
		sum += arr[i];
	}
	
	cout<<"sum: "<<sum<<endl;
	
	delete[] arr;
	return 0;
}
