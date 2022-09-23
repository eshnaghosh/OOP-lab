#include<iostream>
using namespace std;
class student {
public:
	static int k;
	student(){
		k++;
	}
};
//inline void student::object(){cout << "Number of objects created: " << k << endl;}

int student::k=0;

int main()
{
	student s[3];
	student s1,s3,s4;
	cout << "Number of objects created: " << student::k << endl;
	return 0;
}
