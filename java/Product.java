class Product 
{
    protected int idProduct;
    protected String name;
    protected String brand;
    protected String price;

    public Product(int idProduct, String name, String brand, String price) 
    {
        this.idProduct = idProduct;
        this.name = name;
        this.brand = brand;
        this.price = price;
    }

    public String toTableRow() 
    {
        return String.format("| %-7d | %-15s | %-10s | %-12s |", idProduct, name, brand, price);
    }
}