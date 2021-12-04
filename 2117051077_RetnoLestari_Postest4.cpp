#include <iostream>

using namespace std;

int main() {
	
	int a,b;
	int size_c= 0, size_d = 0,size_c_d= 0;
	int array_c[size_d],array_d[size_d],array_c_d[size_c_d];
	cin >> a;
	cin >> b;
	
	for(int i = a; i <= b; i++){
		
		if ( i % 3 == 0 && i % 7 == 0){
			array_c_d[size_c_d] = i;
			size_c_d++;		
		}
		
		else if ( i % 7 == 0){
			array_d[size_d] = i;	
			size_d++;
		}
		
		else if ( i % 3 == 0){
	array_c[size_c] = i;
			size_c++;
		}
		
	}
	
	cout<<"Bagi tiga dan tujuh: \n";
	
	for(int i = 0; i < size_c_d; i++){
		cout<<array_c_d[i] <<" ";
	}
	
	cout<<endl;
	
	cout<<"Bagi tiga: \n";
	
	for(int i = 0; i < size_c; i++){
		cout<<array_c[i] << " ";
	}
	cout<<endl;
	
	cout<<"Bagi tujuh: \n";
	
	for(int i = 0; i < size_d; i++){
		cout<<array_d[i] << " ";
	}
	
	return 0;
}

