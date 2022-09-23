/*1)WAP to find the number of objects created.*/
#include<iostream>
using namespace std;
class student {
public:
	static int k;
	int objects1(student [], int n);
	
};

int student::k;
int student:: objects1(student obj[], int n) {
	for (int i = 0; i < n; i++)
	{
		k++;
	}
	return k;

}
int main()
{
	int n, noofobjects;
	cout << "Enter number of students: " << endl;
	cin >> n;
	student s[n];
	noofobjects =s[0].objects1(s, n);
	cout << "Number of objects created: " << noofobjects << endl;
	return 0;
}