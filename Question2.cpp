/*2. WAP to allocate memory dynamically for storing a student's n subject marks and m length
of characters for storing name. Input and display name, individual subject marks and average
mark of student.*/
#include<iostream>
using namespace std;
class student {
	public:
		int n,m,sum;
		float avg;
		
		student(){
			cout << "Enter the number of marks to store: " << endl;
			cin >> n;
			int *marks = new int[n];
			float average;
			cout<<"Enter number of characters in name:"<<endl;
			cin >> m;
			char *name= new char[m];
			cout<<"Enter name:"<<endl;
			cin>>name;
			
			cout<<"Enter marks:"<<endl;
			for (int i = 0; i<n; i++)
        {
            cin >> *(marks+i);
        }
			for(int i=0;i<n;i++){
				sum=sum+*(marks+i);
			} 
			average=sum/n;
			cout<<"Name:"<<name<<endl;
			for(int i=0;i<n;i++){
				cout<<"Marks:"<<*(marks+i)<<endl;
			}
			cout<<"Sum:"<<sum<<endl;
			cout<<"Average:"<<average<<endl;
	}

};
int main(){
	student s1;
	//s1.display();
}




