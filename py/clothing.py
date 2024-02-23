from product import Product

class Clothing(Product):
    def __init__(self, idProduct, name, brand, price, size, material, gender):
        super().__init__(idProduct, name, brand, price)
        self.size = size
        self.material = material
        self.gender = gender

    def toTableRow(self):
        return f"| {self.idProduct:<2} | {self.name:<12} | {self.brand:<8} | {self.price:<10} | {self.size:<4} | {self.material:<10} | {self.gender:<6} |"