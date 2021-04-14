#include <iostream>
using namespace std;

void set(int& i)
{
	cout << &i << endl;
	i = 30;
}

void set(int* i)
{
	*i = 40;
}

void swap(int& i1, int& i2)
{
	int temp = i1;
	i1 = i2;
	i2 = temp;
}

void swap(int* i1, int* i2)
{
	int temp = *i1;
	*i1 = *i2;
	*i2 = temp;
}

int main()
{
	int i1 = 10;
	int i2 = 20;

	int& r = i1; //Reference

	cout << &i1 << endl;
	cout << &r << endl;
	set(i1);

	int* p = nullptr; //Pointer

	p = &i1;

	//r = 40;

	set(p);
	cout << &i1 << endl;
	cout << *p << endl;

	swap(&i1, &i2); //Calling Pointer Swap Method

	// new / delete
	int* pi = new int[5] { 1, 2, 3, 4, 5 };
	cout << pi << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << pi[i] << endl;
	}
	delete[] pi; // Any New needs to have a delete [] for array's

}