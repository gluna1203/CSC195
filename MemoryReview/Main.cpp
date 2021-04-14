#include <iostream>
using namespace std;

struct Person
{
	char name[32];
	int id;
};

void Square(int& i)
{
	i = i * 2;
}

void Double(int* i)
{
	*i = *i * 2;
}

int main()
{

	// ** REFERENCE **
	// 
	// declare an int variable and set the value to some number (less than 10)
	int num = 9;
	// declare a int reference and set it to the int variable above
	int& r = num;
	// output the int variable
	cout << r << endl;

	// set the int reference to some number
	r = 2;
	// output the int variable
	cout << r << endl;
	// what happened to the int variable when the reference was changed? (insert answer)
	//When the reference was changed the value of the int was changed as well

	// output the address of the int variable
	cout << &num << endl;
	// output the address of the int reference
	cout << &r << endl;
	// are the addresses the same or different? (insert answer)
	//The addresses are the same since a reference is holding the location of the int variable and what ever happens to the ref happens to the int

	// ** REFERENCE PARAMETER **
	//
	// create a function above main() called Square that takes in an int parameter
	// in the function, multiply the int parameter by itself and assign it back to the parameter (i = i * i)
	// call the Square function with the int variable created in the REFERENCE section
	Square(r);

	// output the int variable to the console
	cout << num << endl;

	// !! notice how the variable has not changed, this is because we only passed the value to the function !!
	// change the Square function to take a int reference
	// !! notice how the calling variable has now changed, this is because we 'passed by reference' !!
	// !! when a function takes a reference parameter, any changes to the parameter changes the calling variable ""

	// ** POINTER VARIABLE **
	// 
	// declare an int pointer, set it to nullptr (it points to nothing)
	int* p = nullptr;
	// set the int pointer to the address of the int variable created in the REFERENCE section
	p = &num;
	// output the value of the pointer
	cout << p << endl;
	// what is this address that the pointer is pointing to? (insert answer)
	// 	The pointer is pointing to the memory address of the int variable.
	// output the value of the object the pointer is pointing to (dereference the pointer)
	cout << *p << endl;

	// ** POINTER PARAMETER **
	//
	// create a function above main() called Double that takes in an int pointer parameter
	// in the function, multiply the int pointer parameter by 2 and assign it back to the parameter (i = i * 2)
	// !! make sure to dereference the pointer to set the value and not set the address !!
	// call the Double function with the pointer created in the POINTER VARIABLE section
	Double(p);

	// output the dereference pointer
	cout << *p << endl;
	// output the int variable created in the REFERENCE section
	cout << num << endl;
	// did the int variable's value change when using the pointer?
	//Yes the values of the int variable changed when changing the value of the pointer. Since The what it was pointing to was different than the original int var it was changed to fit.
	
	// ** ALLOCATION/DEALLOCATION **
	//
	// create an int pointer that points at an int allocated on the heap, set the allocated int value to some number
	int* allocated = new int(5);
	int* p2 = allocated;
	// output the pointer value, this should be the address of the int allocated on the heap
	cout << p2 << endl;
	// output the dereference pointer
	cout << *p2 << endl;
	// deallocate the int pointer to free up the memory
	delete allocated;

	// create an int pointer that points at an array of ints allocated on the heap, the array size should be 4-6
	int* p3 = new int[5];
	
	// use a for loop and set each int in the array to a random number (use => rand() % 10 to get a random number
	for (int i = 0; i < 5; i++)
	{
		p3[i] = rand() % 10;
	}
	// use a for loop and output each of the ints in the array
	for (int i = 0; i < 5; i++)
	{
		cout << p3[i] << endl;
	}
	// use a for loop and output the address of each of the ints in the array
	for (int i = 0; i < 5; i++)
	{
		cout << &p3[i] << endl;
	}
	// deallocate the int pointer to free up the memory block (remember it's an array)
	delete[] p3; 

	// ** STRUCTURE **
	//
	// create a Person pointer that points at an array of Persons allocated on the heap, the array size should be 2
	Person* persons = new Person[2];
	// read in a name from the console and set it to the person name, do this for the id also, do this for both Persons
	for (int i = 0; i < 2; i++)
	{
		cout << "Enter Person Name: " << endl;
		cin >> (persons + i)->name;
		cout << "Enter Person ID: " << endl;
		cin >> (persons + i)->id;
		cout << endl;
	}
	// use a for loop and output the name and id of each person in the array 
	for (int i = 0; i < 2; i++)
	{
		cout << (persons + i)->name << endl;
		cout << (persons + i)->id << endl;
		cout << endl;
	}
	// deallocate the person pointer to free up the memory block (remember it's an array)
	delete[] persons;
}