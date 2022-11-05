//Question 2: Overload the array index and function bounce

#include<iostream>

using namespace std;

class overload{
	int arr[100];
	public:
		overload(){ }
		void operator[](int y)
		{
			cout<<"Enter Element: ";
			for(int i=0;i<y;i++)
			{
				cin>>arr[i];
			}
		}
		void show(int y)
		{
			cout<<"Array: "<<endl;
			for(int i=0;i<y;i++)
			{
				cout<<arr[i]<<endl;
			}
		}
		~overload()
		{
			cout<<"Destructor Called!!"<<endl;
		}
};

int main()
{
	overload o1;
	int j;
	cout<<"Enter index: ";
	cin>>j;
	o1[j];
	o1.show(j);
	return 0;
}
