//Question 2: WAP to create a class student and marks

#include<iostream>
using namespace std;

class student
{
	protected:
		int roll;
		char section;
		char name[20];	
};

class marks
{
	protected:
		int marks[3];
		int sum=0;
		float avg=0.0;		
};

class grade:protected student, public marks
{
	protected:
		char grade;
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
			if(avg>90.0){
				cout<<"Grade: O"<<endl;
			}
			else if(avg<89.0 && avg>80.0){
				cout<<"Grade: E"<<endl;
			}
			else if(avg<79.0 && avg>80.0){
				cout<<"Grade: A"<<endl;
			}
			else
			{
				cout<<"Grade: B"<<endl;
			}
	}
};
int main()
{
	grade g;
	g.input();
	g.show();
	return 0;
		
}
