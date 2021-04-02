// UserDataTypes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

struct Sandwich
{
    char name[32];
    bool isHot;
    float price;

    void Display() { std::cout << "Price: " << price << std::endl; }

    static float TAX;
};

int main()
{
    std::cout << "Hello World!\n";

    //Sandwich.Tax = 0.03f;
    Sandwich turkey;
    //turkey->name = "Turkey";
    turkey.isHot = true;
    turkey.price = 5.0f;
    //std::cout << sizeof(double);



    int i = 10;
    char c = 23;

    c = (char)i;

    float f = 23.4;
    double d = 34.0;

    f = static_cast<float>(d);

}
