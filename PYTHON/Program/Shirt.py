# Saya Revana Faliha Salma NIM 2202869 mengerjakan Soal Latihan 2 
# dalam mata kuliah DPBO untuk keberkahanNya maka saya tidak 
# melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

from Clothing import Clothing  # mengimpor kelas Clothing untuk inheritance

class Shirt(Clothing):  # mendefinisikan kelas Shirt yang mewarisi dari kelas Clothing
    __color = ""  # variabel privat untuk warna kemeja
    __sleeveType = ""  # variabel privat untuk jenis lengan kemeja

    def __init__(self, color = "", type = ""):
        super().__init__()  # memanggil konstruktor kelas induk (Clothing) dan menginisialisasi atributnya
        self.__color = color    # menginisialisasi atribut warna kemeja
        self.__sleeveType = type    # menginisialisasi atribut jenis lengan kemeja

    # metode untuk mengatur warna kemeja
    def set_color(self, color):
        self.__color = color

    # metode untuk mendapatkan warna kemeja
    def get_color(self):
        return self.__color
    
    # metode untuk mengatur jenis lengan kemeja
    def set_type(self, type):
        self.__sleeveType = type

    # metode untuk mendapatkan jenis lengan kemeja
    def get_type(self):
        return self.__sleeveType
