# Saya Revana Faliha Salma NIM 2202869 mengerjakan Soal Latihan 2 
# dalam mata kuliah DPBO untuk keberkahanNya maka saya tidak 
# melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

from Product import Product  # mengimpor kelas Product untuk inheritance

class Clothing(Product):  # mendefinisikan kelas Clothing yang mewarisi dari kelas Product
    __size = ""  # variabel privat untuk ukuran pakaian
    __material = ""  # variabel privat untuk bahan pakaian
    __gender = ""  # variabel privat untuk jenis kelamin yang cocok

    def __init__(self, size = "", material = "", gender = ""):
        super().__init__()  # memanggil konstruktor kelas induk (Product) dan menginisialisasi atributnya
        self.__size = size  # menginisialisasi atribut ukuran pakaian
        self.__material = material  # menginisialisasi atribut bahan pakaian
        self.__gender = gender   # menginisialisasi atribut jenis kelamin yang cocok

    # metode untuk mengatur ukuran pakaian
    def set_size(self, size):
        self.__size = size

    # metode untuk mendapatkan ukuran pakaian
    def get_size(self):
        return self.__size
    
    # metode untuk mengatur bahan pakaian
    def set_material(self, material):
        self.__material = material

    # metode untuk mendapatkan bahan pakaian
    def get_material(self):
        return self.__material
    
    # metode untuk mengatur jenis kelamin yang cocok
    def set_gender(self, gender):
        self.__gender = gender

    # metode untuk mendapatkan jenis kelamin yang cocok
    def get_gender(self):
        return self.__gender
