/*3. WAP to create a class interest that is having principal amount, rate of interest and year 
as its data member. The default amount is 1 rupee at the time of creation of the object if 
explicitly not entered by the user. Also input the details for 2 customers and find the simple
interest and compound interest by overloading the calculate function. User defined values can 
be used to initialise at the time of creation (parameterised constructor) */

#include<iostream>
#include<math.h>
using namespace std;

class interest{
	public:
		float SI,CI;
		
		interest(int year, int rate,int principal=1){
			SI= ((principal*year*rate)/100);
		}
		interest(int year, float rate, int nCI,int principal=1){
			CI=((principal * pow(1 + rate/100, nCI*year))-principal);
		}
		void display(){
			cout<<endl;
			cout<<"SI: "<<SI<<endl;}
		void CIdisplay(){
			cout<<"CI: "<<CI<<endl;
		}
};

int main(){
	int SI_prin, SI_year, CI_prin, CI_year,nCI;
	float SI_rate, CI_rate;
	cout<<"Enter principal: ";
	cin>>SI_prin;
	cout<<"Enter year: ";
	cin>>SI_year;
	cout<<"Enter rate: ";
	cin>>SI_rate;
	
	cout<<"Enter principal: ";
	cin>>CI_prin;
	cout<<"Enter rate: ";
	cin>>CI_prin;
	cout<<"Enter year: ";
	cin>>CI_prin;
	cout<<"Enter number of times it is compounded over: ";
	cin>>nCI;
	interest inter(2, 3, 20000);
	interest in(2, 3, 2, 20000);
	inter.display();
	in.CIdisplay();
	return 0;
}
