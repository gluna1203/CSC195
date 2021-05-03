#include <iostream>
#include <fstream>
#include <string>
#include <vector>

void Write(const std::string& text, std::ostream& ostream)
{
	ostream << text;
}

void Write(const std::string& text, std::ofstream& ostream)
{
	//ostream << "File Write\n";
	ostream << text;
}

void Write(std::vector<int>& numbers, std::ofstream& ostream)
{
	for (int n : numbers)
	{
		ostream << n << std::endl;
	}
}

void Read(std::vector<int>& numbers, std::ifstream& istream) 
{
	while (!istream.eof())
	{
		int n;
		istream >> n;
		numbers.push_back(n);
	}
}

int main()
{
	std::string text = "Hello World!";

	std::cout << "Hello\n";
	Write("Hello Again\n", std::cout);

	// Output to file
	std::ofstream output("data.txt");
	//output << "Hello File\n";
	Write(text, output);
	output.close();

	text = "";

	// Input from file
	std::ifstream input("data.txt");
	std::getline(input, text);
	//input >> text;
	input.close();

	std::cout << "Input: " << text << std::endl;

	output.open("numbers.txt");
	std::vector<int> numbers = { 1, 2, 3, 4 };
	//numbers.push_back(1);
	Write(numbers, output);
	output.close();

	numbers.clear();
	input.open("numbers.txt");
	Read(numbers, input);
	input.close();

	for (int n : numbers)
	{
		std::cout << n << std::endl;
	}
}