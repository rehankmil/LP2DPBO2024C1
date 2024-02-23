// Import Library
#include <iostream>
#include <string>
#include "Product.cpp"

using namespace std;

class Clothing : public Product 
{
    protected:
        string size;
        string material;
        string gender;

    public:
        Clothing(int idProduct, string name, string brand, string price, string size, string material, string gender)
        : Product(idProduct, name, brand, price)
        {
            this->size = size;
            this->material = material;
            this->gender = gender;
        }

        string toTableRow()
        {
            return "| " + to_string(idProduct) + " | " + name + " | " + brand + " | " + price + " | " + size + " | " + material + " | " + gender + " |";
        }
};