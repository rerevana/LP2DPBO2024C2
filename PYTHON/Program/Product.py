# Saya Revana Faliha Salma NIM 2202869 mengerjakan Soal Latihan 2 
# dalam mata kuliah DPBO untuk keberkahanNya maka saya tidak 
# melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

class Product:
    
    __idProduct = ""    # variabel privat untuk ID produk
    __name = ""     # variabel privat untuk nama produk
    __brand = ""    # variabel privat untuk merek produk
    __price = ""    # variabel privat untuk harga produk

    # konstruktor dengan parameter opsional untuk setiap atribut
    def __init__(self, id = "", nama = "", brand = "", price = ""):
        self.__id = id  # menginisialisasi atribut ID produk
        self.__nama = nama   # menginisialisasi atribut nama produk
        self.__brand = brand    # menginisialisasi atribut merek produk
        self.__price = price    # menginisialisasi atribut harga produk

    # metode untuk mengatur ID produk
    def set_id(self, id):
        self.__idProduct = id

    # metode untuk mendapatkan ID produk
    def get_id(self):
        return self.__idProduct
    
    # metode untuk mengatur nama produk
    def set_name(self, name):
        self.__name = name

    # metode untuk mendapatkan nama produk
    def get_name(self):
        return self.__name
    
    # metode untuk mengatur merek produk
    def set_brand(self, brand):
        self.__brand = brand

    # metode untuk mendapatkan merek produk
    def get_brand(self):
        return self.__brand
    
    # metode untuk mengatur harga produk
    def set_price(self, price):
        self.__price = price

    # metode untuk mendapatkan harga produk
    def get_price(self):
        return self.__price
