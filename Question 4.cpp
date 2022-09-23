//Question 4: WAP to create library
#include<iostream>
using namespace std;

class university
{
	private:
		char uni_name[20];
		int total;
	public:
		void uniname(){
			cout<<"Enter university name: ";
			cin>>uni_name;
			cout<<"Enter total strength of students: ";
			cin>>total;
		}
		void uni(){
			cout<<"University Name: "<<uni_name<<endl;
			cout<<"Toatl strenght of students: "<<total<<endl;
		}
		
};

class library:public university
{
	protected:
		int tot;
		char lib_dept_name[10];
	public:

		void lib_details(){
			cout<<"Enter library department name: ";
			cin>> lib_dept_name;
	        cin.ignore();
			cout<<"Enter total number of books: ";
			cin>> tot;
			cin.ignore();
		}
		void show()
		{
			cout<<"Library Details:"<<endl;
			cout<<"Library Department Name: "<<lib_dept_name<<endl;
			cout<<"Total number of books: "<<tot<<endl;
		}
};

class student:public university
{
	protected:
		int roll,year;
		char section;
		char name[20];
	public:
		void stddet()
		{
			cout<<"Enter Student's roll: ";
			cin>>roll;
			cout<<"Enter Student's Name: ";
			cin>>name;
			cout<<"Enter Student's section: ";
			cin>>section;
			cout<<"Enter Student's year od admission: ";
			cin>>year;
		}
		void output(){
			cout<<"Student Details:"<<endl;
			cout<<"Student's Name: "<<name<<endl;
			cout<<"Student's Roll: "<<roll<<endl;
			cout<<"Student's Section: "<<section<<endl;
			cout<<"Student's year of admission: "<<year<<endl;
		}
		
};

int main(){
	library l1;
	student s1;
	l1.lib_details();
	l1.uniname();
	l1.uni();
	l1.show();
	s1.uniname();
	s1.uni();
	s1.stddet();
	s1.output();
	return 0;
}
