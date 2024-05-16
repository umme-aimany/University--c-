#include<iostream>
using namespace std;
/////////void jo function ki data type hoti ha wo value return nhi karti////////////



void talk(){
	cout<<"i practice the function in c++" <<endl;
}
/////////function banta bahir ha call main body ka under hota ha ////////////////////


///////prototyping ..means call function before/////////////////
///////////////PARAMETERIZED AND ARGUMENTAL FUNCTION///////////
/////////argumental function ka ya benefit hota ha hm har call function par diffrent values da sakta ha/////////
char message (string girl){
	cout <<"hellow good morning my dear friend"<< girl<<endl;
	
}
//main(){
//	talk();
//	talk();
//	message(" Haleema ");
//	message(" Ali ");
//}
////////////LECTURE:10/////////////////
//////////////SCOPE OF VARIABLES/////////
//////////LOCAL SCOPE OR GLOBAL SCOPE/////////////
/////LOCAL SCOPE WO HOTA JISMA BOUNDRIES OR LIMIT A GATI HA MEANS AGAR KOI VARIABLE FUNCTION KA UNDER DECLARE KIYA HA TO ISKA SCOPE LOCAL HOGA///////////
//int age=18;////global scope
//main(){
//int age=19;//local scope
//cout<< age <<endl;
//
//}
//////abhi is code ka output 19 a rha ha agar hme output 18 chaiye to hm uniary scope resolution operator(::)use karai ga//////////
//int age1=18;
//main(){
//	
//	int age1=19;
//	cout<<::age1 <<endl;
//}

///////////////////////////////call by refrence operator (&)//this check ka hmara variable ya function computer ki memory ma kaha store ha/////////////
main(){

int age=23;
cout<<&age <<endl;////this operator to shoe the output to memory location of this variable


}


















