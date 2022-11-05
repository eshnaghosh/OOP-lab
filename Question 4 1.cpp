//Question 4

#include<iostream>
using namespace std;

class employee
{
	int salary;
	char grade;
	public:
		employee()
		{
		}
		employee(int s)
		{
			salary = s;
			
		}
		friend istream &operator>>(istream &k, employee&l)
		{

			k>>l.salary;
			//k>>l.grade;
			return k;
		}
		friend ostream &operator<<(ostream &k, employee&l)
		{
			if(salary>100000)
			{
				k<<"Salary: ";
			k<<l.salary<<endl;
			k<<"Grade: A"<<endl;
			}
			else if(salary>50000||salary<=100000)
			{
				k<<"Salary: ";
			k<<l.salary<<endl;
			k<<"Grade: B"<<endl;
			}
			else
			{
				k<<"Salary: ";
			k<<l.salary<<endl;
			k<<"Grade: C"<<endl;
			}
			return k;
		}
		
};

int main()
{
	employee e1;
	employee e2(210000);
	cin>>e1;
	cout<<e1<<endl;
	cout<<e2<<endl;
	return 0;
}
