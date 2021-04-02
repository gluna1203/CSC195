

#include <iostream>
using namespace std;

class Sandwich
{
public:
    char name[32];
    bool isHot;
    float price;

    void Display() { cout << "Price: " << price << endl; }

    //static float TAX;
};

int main()
{
    cout << "Hello World!\n";

    //Sandwich.TAX = 0.03f;

    Sandwich turkey;
    //turkey.name = "Turkey";

    //turkey.TAX = 0.03f;
    turkey.isHot = true;
    turkey.price = 5.0f;
    turkey.Display();

    //cout << sizeof(Sandwich);

    int i = 10;
    char c = 23;

    c = (char)i;

    float f = 23.4f;
    double d = 34.0;

    f = static_cast<float>(d);
}
