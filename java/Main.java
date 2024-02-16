import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main
{
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);
        List<Shirt> shirts = new ArrayList<>();
        shirts.add(new Shirt(1, "T-Shirt", "Adidas", "Rp159.999", "M", "Cotton", "Male", "Red", "Short"));
        shirts.add(new Shirt(2, "Polo Shirt", "Nike", "Rp239.999", "L", "Polyester", "Male", "Blue", "Long"));
        shirts.add(new Shirt(3, "Tank Top", "Puma", "Rp99.999", "S", "Spandex", "Female", "Black", "Sleeveless"));

        boolean tambah = true;

        while (tambah)
        {
            System.out.println("+--------------------------------------------------------------------------------------------------------+");
            System.out.println("|                                      DATA PEMBELIAN KAOS                                               |");
            System.out.println("+----+-----------------+------------+--------------+------+--------------+--------+--------+-------------+");
            System.out.println("| ID | Name            | Brand      | Price        | Size | Material     | Gender | Color  | Sleeve Type |");
            System.out.println("+----+-----------------+------------+--------------+------+--------------+--------+--------+-------------+");
            for (Shirt shirt : shirts)
            {
                System.out.println(shirt.toTableRow());
            }
            System.out.println("+----+-----------------+------------+--------------+------+--------------+--------+--------+-------------+");
            System.out.println("Apakah ada tambahan lain?");
            System.out.println("1. Iya");
            System.out.println("2. Tidak");
            System.out.println("Masukkan Pilihan :");
            int pilih = scanner.nextInt();

            if (pilih == 1)
            {
                System.out.println("Masukan data :");
                System.out.print("ID: ");
                int id = scanner.nextInt();
                scanner.nextLine(); // Consume newline
                System.out.print("Name: ");
                String name = scanner.nextLine();
                System.out.print("Brand: ");
                String brand = scanner.nextLine();
                System.out.print("Price: ");
                String price = scanner.nextLine();
                System.out.print("Size: ");
                String size = scanner.nextLine();
                System.out.print("Material: ");
                String material = scanner.nextLine();
                System.out.print("Gender: ");
                String gender = scanner.nextLine();
                System.out.print("Color: ");
                String color = scanner.nextLine();
                System.out.print("Sleeve Type: ");
                String sleeveType = scanner.nextLine();

                shirts.add(new Shirt(id, name, brand, price, size, material, gender, color, sleeveType));
            }
            else if (pilih == 2)
            {
                tambah = false;
                System.out.println("Terima Kasih!");
            }
            else
            {
                System.out.println("Masukan tidak valid! (Hanya menerima 1 atau 2)");
            }
        }
    }
}
