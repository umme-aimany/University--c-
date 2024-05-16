///////switch statement just char or integer ka sath work karti ha //string ka sath workj nhi karti///////////////////////////
//////switch statement ma hm condition nhi likhta just variable ka name likhta ha
#include<iostream>
using namespace std;
main(){
	char grade='B';
	switch (grade){
	
		case 'a':
			cout<<"your grade is A";
			break;
		case 'b':
			cout<<"your grage is b";
			break;
		case 'c':
			cout<<"your grade is c";
			break;
		default:
			cout<<"you need work hard";
			
		
	}
}
