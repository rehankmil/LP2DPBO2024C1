from clothing import Clothing

class Shirt(Clothing):
    def __init__(self, idProduct, name, brand, price, size, material, gender, color, sleeveType):
        super().__init__(idProduct, name, brand, price, size, material, gender)
        self.color = color
        self.sleeveType = sleeveType

    def toTableRow(self):
        return f"| {self.idProduct:<2} | {self.name:<12} | {self.brand:<8} | {self.price:<10} | {self.size:<4} | {self.material:<10} | {self.gender:<6} | {self.color:<6} | {self.sleeveType:<11} |"
