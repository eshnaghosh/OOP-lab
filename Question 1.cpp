//Question 1
#include<iostream>
using namespace std;
class assignment{
	int a;
	float b;
	public:
		assignment()
		{
			cout<<"Enter 1st value: ";
			cin>>a;
			cout<<"Enter 2nd value: ";
			cin>>b;
		}
		assignment(int k, float l)
		{
			a=k;
			b=l;
		}
		assignment(assignment &g)
		{
			a=g.a;
			b=g.b;
		}
		void operator=(assignment k)
		{
			this->a=k.a;
			this->b=k.b;
		}
		void show()
		{
			cout<<"A: "<<a<<endl;
			cout<<"B: "<<b<<endl;
		}
		~assignment()
		{
			cout<<"Destructor Called!!"<<endl;
		}
};

int main()
{
	assignment a1,a3;
	assignment a2(3,4.5f);
	a1.show();
	a2.show();
	a3.show();
	a3=a2;
	a3.show();
	return 0;
}
