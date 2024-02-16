class Shirt extends Clothing
{
    private String color;
    private String sleeveType;

    public Shirt(int idProduct, String name, String brand, String price, String size, String material, String gender, String color, String sleeveType)
    {
        super(idProduct, name, brand, price, size, material, gender);
        this.color = color;
        this.sleeveType = sleeveType;
    }

    public String toTableRow() 
    {
        return String.format("| %-2d | %-15s | %-10s | %-12s | %-4s | %-12s | %-6s | %-6s | %-11s |", idProduct, name, brand, price, size, material, gender, color, sleeveType);
    }
}