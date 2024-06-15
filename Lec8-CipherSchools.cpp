

// Declaring  array and storing values inside it...


#include<iostream>
using namespace std;
int main(){
	int a[5];
	int i;
	cout<<"Enter 5 numbers: "<<endl;
	for (i=0;i<=5;i++){
		cin>>a[i];
		
	}
	cout<<"Given 5 inputs in array:"<<endl;
	for(i=0;i<=5;i++){
		cout<<a[i]<<" ";
	}
	return 0;
	
}




// Array of reverse of input numbers....



#include<iostream>
using namespace std;
int main(){
	int array[5];
	int i;
	cout<<"Enter 5 integer number:"<<endl;
	for(i=0;i<=5;i++){
		cin>> array[i];
		
	}
	cout<<"Array of reverse of  input numbers:"<<endl;
	for(i=5;i>=0;i--){
		cout<<array[i]<<" ";
	}
	return 0;
}





