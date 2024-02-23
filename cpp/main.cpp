#include <iostream>
#include <vector>
#include <string>
#include "Shirt.cpp"

using namespace std;

int main()
{
    vector<Shirt> shirts;
    bool tambah = true;
    shirts.push_back(Shirt(1, "T-Shirt   ", "Adidas", "Rp159.999", "M", "Cotton   ", "Male  ", "Red  ", "Short      "));
    shirts.push_back(Shirt(2, "Polo Shirt", "Nike  ", "Rp239.999", "L", "Polyester", "Male  ", "Blue ", "Long       "));
    shirts.push_back(Shirt(3, "Tank Top  ", "Puma  ", "Rp99.999 ", "S", "Spandex  ", "Female", "Black", "Sleeveless "));

    while (tambah)
    {
        cout << "+------------------------------------------------------------------------------------------+" << endl;
        cout << "|                                     DATA PEMBELIAN KAOS                                  |" << endl;
        cout << "+------+------------+--------+-----------+------+-----------+--------+-------+-------------+" << endl;
        cout << "|  ID  | Name       | Brand  | Price     | Size | Material  | Gender | Color | Sleeve Type |" << endl;
        cout << "+------+------------+--------+-----------+------+-----------+--------+-------+-------------+" << endl;
        for (Shirt shirt : shirts)
        {
            cout << shirt.toTableRow() << endl;
        }
        cout << "+------------------------------------------------------------------------------------------+" << endl;
        cout << "Apakah ada tambahan lain?\n";
        cout << "1. Iya\n";
        cout << "2. Tidak\n";
        cout << "Masukkan Pilihan :\n";
        int choice;
        cin >> choice;

        if (choice == 1)
        {
            int id;
            string name, brand, price, size, material, gender, color, sleeveType;

            cout << "Enter details for the shirt:" << endl;
            cout << "ID: ";
            cin >> id;
            cout << "Name: ";
            cin.ignore();
            getline(cin, name);
            cout << "Brand: ";
            getline(cin, brand);
            cout << "Price: ";
            cin >> price;
            cout << "Size: ";
            cin >> size;
            cout << "Material: ";
            cin.ignore();
            getline(cin, material);
            cout << "Gender: ";
            getline(cin, gender);
            cout << "Color: ";
            getline(cin, color);
            cout << "Sleeve Type: ";
            getline(cin, sleeveType);

            shirts.push_back(Shirt(id, name, brand, price, size, material, gender, color, sleeveType));
        } 
        else if (choice == 2)
        {
            tambah = false;
            cout << "Terima Kasih!" << endl;
        }
        else
        {
            cout << "Masukan tidak valid! (Hanya menerima 1 atau 2)" << endl;
        }
    }

    return 0;
}
