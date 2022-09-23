//Question 1: WAP to create a class student

#include<iostream>
using namespace std;

class employee
{
	protected:
		int age, emp_id;
		char name[20];
};

class department: employee
{
		char dept_name[20];
		int dept_id;
	public:
		void input(){
			cout<<"Enter Employee name: ";
			cin>>name;
			cout<<"Enter Employee ID: ";
			cin>>emp_id;
			cout<<"Enter Employee age: ";
			cin>>age;
			cout<<"Enter Department name: ";
			cin>>dept_name;
			cout<<"Enter Department ID: ";
			cin>>dept_id;
	
		}
		void output(){
			cout<<"Employee Details:"<<endl;
			cout<<"Employee name: "<<name<<endl;
			cout<<"Employee ID: "<<emp_id<<endl;
			cout<<"Employee age: "<<age<<endl;
			cout<<"Department name: "<<dept_name<<endl;
			cout<<"Department ID: "<<dept_id<<endl;
	
		}
};

class grade:public department
{
	protected:
		char grade;
		int basic;
	public:

		void salary()
		{
			cout<<"Enter Grade: ";
			cin>>grade;
			cout<<"Enter Monthly Basic: ";
			cin>>basic;
		}
		void show(){
			cout<<"Employee Grade: "<<grade<<endl;
			cout<<"Employee's basic salary: "<<basic<<endl;
	}
};

int main()
{
	grade g1;
	g1.input();
	g1.salary();
	g1.output();
	g1.show();
	return 0;
		
}
