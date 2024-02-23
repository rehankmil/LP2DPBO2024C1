class Product:
    def __init__(self, idProduct, name, brand, price):
        self.idProduct = idProduct
        self.name = name
        self.brand = brand
        self.price = price

    def toTableRow(self):
        return f"| {self.idProduct:<2} | {self.name:<12} | {self.brand:<8} | {self.price:<10} |"