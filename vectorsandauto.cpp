#include <vector>
#include <iostream>
using namespace std;

int main(){
	
	vector<char> vcomp;
	vector<int> v2={10,14,32,64,16};
	
	vcomp.push_back('p'); // add element 
	v2.pop_back(); // remove element

	
	//PRINTING VECTORS
	
	for (int i=0; i<v2.size(); i++)
		cout << v2[i] << " ";
		
	cout << endl;
	
	//USING AUTO
	
	for ( auto v:v2)	//for each value in v2
		cout << v << " ";

	cout << endl;
	
	return 0;
}


