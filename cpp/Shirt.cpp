// Import Library
#include <iostream>
#include <string>
#include "Clothing.cpp"

using namespace std;

class Shirt : public Clothing
{
    private:
    string color;
    string sleeveType;

    public:
        Shirt(int idProduct, string name, string brand, string price, string size, string material, string gender, string color, string sleeveType)
            : Clothing(idProduct, name, brand, price, size, material, gender)
            {
                this->color = color;
                this->sleeveType = sleeveType;
            }

    string toTableRow()
    {
        return "|  " + to_string(idProduct) + "   | " + name + " | " + brand + " | " + price + " | " + size + "    | " + material + " | " + gender + " | " + color + " | " + sleeveType + " |";
    }
};