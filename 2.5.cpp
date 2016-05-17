#include <iostream>
using namespace std;


int main(){
	int size;
	cin>> size;
	int *nums=new int[size+1];
	for (int i=0;i<size;i++){
		cin>>nums[i];
	}
	delete []nums; //no libera toda la memoria

}


