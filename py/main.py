from shirt import Shirt

def main():
    shirts = [
        Shirt(1, "T-Shirt", "Adidas", "Rp159.999", "M", "Cotton", "Male", "Red", "Short"),
        Shirt(2, "Polo Shirt", "Nike", "Rp239.999", "L", "Polyester", "Male", "Blue", "Long"),
        Shirt(3, "Tank Top", "Puma", "Rp99.999", "S", "Spandex", "Female", "Black", "Sleeveless")
    ]

    while True:
        print("+-----------------------------------------------------------------------------------------------+")
        print("|                                        DATA PEMBELIAN KAOS                                    |")
        print("+----+--------------+----------+------------+------+------------+--------+--------+-------------+")
        print("| ID | Name         | Brand    | Price      | Size | Material   | Gender | Color  | Sleeve Type |")
        print("+----+--------------+----------+------------+------+------------+--------+--------+-------------+")
        for shirt in shirts:
            print(shirt.toTableRow())
        print("+-----------------------------------------------------------------------------------------------+")

        choice = input("Apakah ada tambahan lain?\n1. Iya\n2. Tidak\nMasukkan Pilihan : ")

        if choice == "1":
            idProduct = int(input("ID: "))
            name = input("Name: ")
            brand = input("Brand: ")
            price = input("Price: ")
            size = input("Size: ")
            material = input("Material: ")
            gender = input("Gender: ")
            color = input("Color: ")
            sleeveType = input("Sleeve Type: ")

            shirts.append(Shirt(idProduct, name, brand, price, size, material, gender, color, sleeveType))
        elif choice == "2":
            print("Terima Kasih!")
            break
        else:
            print("Masukan tidak valid! (Hanya menerima 1 atau 2)")

if __name__ == "__main__":
    main()
