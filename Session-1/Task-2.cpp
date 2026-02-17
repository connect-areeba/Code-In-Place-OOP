#include <iostream>
using namespace std;
bool isPowerOfTwo(int n){
	if(n > 0 && (n & (n-1)) == 0){
		return true;
	}
	else{
		return false;
	}
}

int main(){
	cout <<isPowerOfTwo(8)<<endl;
	cout<<isPowerOfTwo(6)<<endl;
	
	return 0;
}
