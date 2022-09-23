#include<iostream>
using namespace std;

class classname{
	public:
		int value;
		static int i;
		classname(){
			cout<<"Hello world."<<endl;
		}
		classname(int k){
			cout<<"enter value:"<<endl;
			cin>>value;
			value=value+k;
			cout<<"The value is: "<<value<<endl;
		}
		classname(classname &l){
			value=l.value;
			cout<<"The value: "<<value<<endl;
		}
		~classname(){
			i++;
			cout<<i<<"\tDestructor called"<<endl;
		}
};
int classname::i=0;
int main(){
	{
		classname c1;
		cout<<"1st class created"<<endl;
	}
	{
		classname c2(7);
		cout<<"2nd class created"<<endl;
	}
	//classname c2(9);
	{
		classname c3(c2);
		cout<<"3rd class created"<<endl;
	}
	
	return 0;
}
