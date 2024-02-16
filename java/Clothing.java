class Clothing extends Product 
{
    protected String size;
    protected String material;
    protected String gender;

    public Clothing(int idProduct, String name, String brand, String price, String size, String material, String gender)
    {
        super(idProduct, name, brand, price);
        this.size = size;
        this.material = material;
        this.gender = gender;
    }

    public String toTableRow()
    {
        return String.format("| %-7d | %-15s | %-10s | %-12s | %-4s | %-12s | %-6s |", idProduct, name, brand, price, size, material, gender);
    }
}