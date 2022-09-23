//Question 1: WAP to create a class student

#include<iostream>
using namespace std;

class student
{
	protected:
		int roll;
		char section;
		char name[20];
		
		
};

class marks:public student
{
	protected:
		int marks[3];
		int sum=0;
		float avg=0.0;
	public:
		void input()
		{
			cout<<"Enter student's name: ";
			cin>>name;
			cout<<"Enter student's roll: ";
			cin>>roll;
			cout<<"Enter student's section: ";
			cin>>section;
			for(int i=0;i<3;i++){
				cout<<"Enter student's marks: ";
				cin>>marks[i];
				sum=sum+marks[i];
			}
			avg=sum/3;
	
		}
		void show(){
			cout<<"Student Details:"<<endl;
			cout<<"Student's name: "<<name<<endl;
			cout<<"Enter student's roll: "<<roll<<endl;
			cout<<"Enter student's section: "<<section<<endl;
			for(int i=0;i<3;i++)
			{
				cout<<"Student's marks: "<<marks[i]<<endl;
			}
			cout<<"Average Marks: "<<avg<<endl;
	}
		
};

int main()
{
	marks m1,m2;
	m1.input();
	m2.input();
	m1.show();
	m2.show();
	return 0;
		
}
