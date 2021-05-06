#include <iostream>
#include <time.h>

void func1(int& i)
{
	i = 10;
}

void func2(const std::string& text)
{

}

int random(int max)
{
	int r = rand() % max + 1;

	return r;
}

class A
{
public:
	void SetValue(int v) { i = v; }
	int GetValue() const { return i; }
	int& GetReference() { return this->i; }
	const int& GetConstReference() const { return i; }
	int* GetPointer() { return &i; }
	int* GetPointer2() { return &i2; }
	const std::string& GetText() { return text; }

	int& operator [] (int index) { return elements[index];  }
	const int& operator [] (int index) const { return elements[index];  }

private:
	int i;
	int i2;
	std::string text;
	int elements[10];
};

//int& A_GetReference(A* p)
//{
//	//p = This
//	return p->i;
//}

void func3(A& a)
{
	std::cout << a.GetConstReference() << std::endl;
}

int main() 
{
	A a;
	a.SetValue(10);
	a.GetReference() = 20;
	a[3] = 10;
	std::cout << a.GetReference() << std::endl;
	std::cout << &a << std::endl;
	std::cout << a.GetPointer() << std::endl;
	std::cout << a.GetPointer2() << std::endl;

	func3(a);

	int i = 5;
	func1(i);
	
	std::string text = "Hello";

	time_t start = time(NULL);
	for (int i = 0; i < 1000000; i++)
	{
		func2(text);
	}
	time_t end = time(NULL);
	std::cout << end - start << std::endl;

	srand(static_cast<unsigned int>(time(NULL)));
	std::cout << random(10) << std::endl;
}