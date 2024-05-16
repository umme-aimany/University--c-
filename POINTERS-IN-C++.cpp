#include<iostream>
using namespace std;
main(){
	int age=18;
	string name="Aiman";
	
	///to find adree of age//////////////
	//we know that data ype of pointer and variable is same so//////////
	int *x;
	x=&age;
	cout<<x <<endl;
	////////////////OUTPUT OF AGE IS :0x6ffe00////////////////////
	string *y;/////y is pointer///
	y=&name;
	cout<<y <<endl;
	/////////////////0x6ffdf0/////////////
	string grade="aiman khan";
	string *z;
	z=&grade;
	cout<<z <<endl;
	
	////////0x6ffdd0///////////
	////////names kuch bhi rakh sakta ha just data type same honi chaiye////////////
	
	int array[5];
	int *pointer;
	pointer=array;
	cout<<"the memory adress of pointer is "<<pointer<<endl;
	/////////////////////after increment is /////////////////
	///after increment increase is 4 bcuz we know that int carries 4 bytes////////
	pointer++;
	cout<<pointer<<endl;
/////////////find data type size/////////////////
cout<<sizeof(int)<<"bytes store in integer";

cout<<sizeof(string)<<"bytes store in integer";
cout<<sizeof(char)<<"bytes store in integer";
 cout<<sizeof(float)<<"bytes store in integer";
cout<<sizeof(double)<<"bytes store in integer";
cout<<sizeof(long)<<"bytes store in integer";
cout<<sizeof(short)<<"bytes store in integer";



////////////////////////Structures/////////////////////////
struct info{
	char name [20];
	char adress [30];
};
	info e={"aiman khan","karachi "};
	cout << e.name <<endl;
	cout<<e.adress<<endl;























}
