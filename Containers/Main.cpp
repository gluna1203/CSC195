#include <iostream>

template <typename TValue>
class set
{
	struct node_t
	{
		node_t(const TValue& value) { _value = value; }

		TValue _value;
		node_t* _left = { nullptr };
		node_t* _right = { nullptr };
	};

public:
	void insert(const TValue& value)
	{
		node_t* new_node = new node_t{value};

		if (_root == nullptr) 
		{
			_root = new_node;
		}
		else
		{
			node_t* node = _root;
			while (node)
			{
				if (value < node->_value)
				{
					if (node->_left == nullptr)
					{
						node->_left = new_node;
						break;
					}
					else
					{
						node = node->_left;
					}
				}
				else
				{
					if (node->_right == nullptr)
					{
						node->_right = new_node;
						break;
					}
					else
					{
						node = node->_right;
					}
				}
			}
		}
	}

	bool find(const TValue& value)
	{
		node_t* node = _root;
		while (node && node->_value != value)
		{
			node = (value < node->_value) ? node->_left : node->_right;
		}

		return (node != nullptr);
	}

private:
	node_t* _root = { nullptr };
};

template <typename Tkey, typename TValue>
class map
{
	struct node_t
	{
		node_t(const Tkey& key, const TValue& value) { _key = key;  _value = value; }

		Tkey _key;

		TValue _value;
		node_t* _left = { nullptr };
		node_t* _right = { nullptr };
	};

public:
	void insert(const Tkey& key, const TValue& value)
	{
		node_t* new_node = new node_t{ key, value };

		if (_root == nullptr)
		{
			_root = new_node;
		}
		else
		{
			node_t* node = _root;
			while (node)
			{
				if (key < node->_key)
				{
					if (node->_left == nullptr)
					{
						node->_left = new_node;
						break;
					}
					else
					{
						node = node->_left;
					}
				}
				else
				{
					if (node->_right == nullptr)
					{
						node->_right = new_node;
						break;
					}
					else
					{
						node = node->_right;
					}
				}
			}
		}
	}

	bool find(const TValue& value)
	{
		node_t* node = _root;
		while (node && node->_value != value)
		{
			node = (value < node->_value) ? node->_left : node->_right;
		}

		return (node != nullptr);
	}

	TValue& at(const Tkey& key)
	{
		node_t* node = _root;
		while (node && node->_key != key)
		{
			node = (key < node->_key) ? node->_left : node->_right;
		}

		return node->_value;
	}

private:
	node_t* _root = { nullptr };
};




int main()
{
	set<std::string> ids;
	ids.insert("Gabriel");
	ids.insert("Alex");
	ids.insert("James");
	ids.insert("Obama");

	std::cout << "found (Gabriel): " << (ids.find("Gabriel") ? "found" : "not found") << std::endl;
	std::cout << "found (James): " << ids.find("James") << std::endl;
	std::cout << "found (Cole): " << ids.find("Cole") << std::endl;

	map<int, std::string> students;
	students.insert(20, "Kayla");
	students.insert(10, "Jesse");
	students.insert(25, "Zach");
	students.insert(30, "Grayzon");

	std::cout << "found (25): " << students.at(25) << std::endl;

}
