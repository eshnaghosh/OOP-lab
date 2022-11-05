//Question 2: Overload function bounce

#include<iostream>

using namespace std;

class overload{
	int a;
	float b;
	public:
		overload(){
			cout<<"Enter 1st value: ";
			cin>>a;
			cout<<"Enter 2nd value: ";
			cin>>b;
		}
		overload(int k, float l)
		{
			a=k;
			b=l;
		}
		overload(overload &g)
		{
			a=g.a;
			b=g.b;
		}
		void operator()(int y, float z)
		{
			a=y;
			b=z;
		}
		void show()
		{
			cout<<"A: "<<a<<endl;
			cout<<"B: "<<b<<endl;
		}
		~overload()
		{
			cout<<"Destructor Called!!"<<endl;
		}
};

int main()
{
	overload o1;
	overload o2(3,5.6f);
	o1.show();
	o2.show();
	o1(74,0.9f);
	o2(11,8.9f);
	cout<<"Function Bounce"<<endl;
	o1.show();
	o2.show();
	return 0;
}
