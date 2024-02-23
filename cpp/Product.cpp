// Import Library
#include <iostream>
#include <string>

using namespace std;

class Product
{
    protected:
        int idProduct;
        string name;
        string brand;
        string price;

    public:
        Product(int idProduct, string name, string brand, string price)
        {
            this->idProduct = idProduct;
            this->name = name;
            this->brand = brand;
            this->price = price;
        }

        string toTableRow()
        {
            return "| " + to_string(idProduct) + " | " + name + " | " + brand + " | " + price + " |";
        }
};