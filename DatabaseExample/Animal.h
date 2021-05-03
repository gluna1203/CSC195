#pragma once
#include <string>
class Animal
{
public:
	enum class eType 
	{
		Bird = 1,
		Mammal
	};

	std::string GetName() { return m_name; }
	virtual eType GetType() = 0;

	virtual void Read(std::ostream& ostream, std::istream& istream);
	virtual void Write(std::ostream& ostream);

protected:
	std::string m_name;
	int m_lifespan = 0;
};

