//question 3
#include<iostream>
#include<stdlib.h>
using namespace std;

class overload{
	int roll;
	float avg;
	public:
		overload()
		{
			cout<<"Constructor Called"<<endl;
		}
		overload(int a, float b){
			roll=a;
			avg=b;
		}

		void* operator new(size_t size)
		{
			cout<<"Memory Allocated!!"<<endl;
			void *ptr = (void*) malloc(size);
			return ptr;
		}
		void operator delete(void *ptr)
		{
			cout<<"Memory Deallocated!!"<<endl;
			free(ptr);
		}
		void show()
		{
			cout<<"Roll: "<<roll<<endl;
			cout<<"Average: "<<avg<<endl;
		}
		~overload()
		{
			cout<<"Destructor Called!!"<<endl;
		}
};
int main()
{
	overload *o = new overload(12,67.9f);
	o->show();
	delete(o);
	int *ptr = new int(8);
	cout<<*ptr<<endl;
	delete(ptr);
	return 0;
}
