//Question 1: WAP to create a class student having roll, name and subject marks

#include<iostream>
using namespace std;

class student{
	public:
		int roll;
		int *marks = new int[5];
		char *name=new char[20];
		student(){
		}
		student(int roll, int* mark, char* sname){
			roll=roll;
			name=sname;
			marks=mark;
			cout<<"Student Details:"<<endl;
			cout<<"Name: "<<name<<endl;
			cout<<"Roll: "<<roll<<endl;
			for(int i=0; i<5; i++){
				cout<<"Marks: "<<*(marks+i)<<endl;
			}
			
		}
		~student(){
			delete []marks;
			delete []name;
			
			cout<<"Memory dealloacted"<<endl;
		}
};

int main(){
	int *marks=new int[5];
	char *name=new char[20];
	int roll;
	student s1,s2;
	{
		
		cout<<"For first student"<<endl;
		cout<<"Enter name:"<<endl;
		cin>>name;
		cout<<"Enter roll:"<<endl;
		cin>>roll;
		for(int i=0;i<5;i++){
			cout<<"enter marks:"<<endl;
			cin>>*(marks+i);
		}
		
		s1=student(roll, marks, name);
	}
	
	{
		
		cout<<"For second student:"<<endl;
		cout<<"Enter name:"<<endl;
		cin>>name;
		cout<<"Enter roll:"<<endl;
		cin>>roll;
		for(int i=0;i<5;i++){
			cout<<"enter marks:"<<endl;
			cin>>*(marks+i);
		}
		s2=student(roll, marks, name);
	}
	
	return 0;
}
