//Question2: WAP to create a class employee

#include<iostream>
using namespace std;

class employee{
	public:
		int ID, dept_ID, salary;
		char *name= new char[20];
		employee(){
		}
		employee(int id, int dept_id, int sal, char* ename){
			ID=id;
			dept_ID=dept_id;
			name=ename;
			salary=sal;
			cout<<"Employee details:"<<endl;
			cout<<"Employee ID: "<<ID<<endl;
			cout<<"Employee Name: "<<ename<<endl;
			cout<<"Salary: "<<salary<<endl;
			cout<<"Department ID: "<<dept_id<<endl;
		}
		employee(employee &k){
			ID=k.ID;
			dept_ID=k.dept_ID;
			name=k.name;
			salary=k.salary;
			
		}
		friend void display(employee);
};

void display(employee e){
	cout<<"Employee details:"<<endl;
	cout<<"Employee ID: "<<e.ID<<endl;
	cout<<"Employee Name: "<<e.name<<endl;
	cout<<"Salary: "<<e.salary<<endl;
	cout<<"Department ID: "<<e.dept_ID<<endl;
}
int main(){
	employee e1;
	int id, dept,sal;
	char *name=new char[20];
	cout<<"Enter Employee Name:";
	cin>>name;
	cout<<"Enter Employee ID:";
	cin>>id;
	cout<<"Enter Monthly salary:";
	cin>>sal;
	cout<<"Enter Department ID:";
	cin>>dept;
	e1=employee(id,dept,sal,name);
	employee e2=e1;
	display(e2);
	return 0;
}
