/*
    Saya Revana Faliha Salma NIM 2202869 mengerjakan Soal Latihan 2 
    dalam mata kuliah DPBO untuk keberkahanNya maka saya tidak 
    melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include <iostream>
#include <string>
#include "Product.cpp"

using namespace std;

// deklarasi kelas Clothing yang merupakan turunan dari kelas Product
class Clothing : public Product{
    private:
        string size; // variabel untuk menyimpan ukuran pakaian
        string material; // variabel untuk menyimpan bahan pakaian
        string gender; // variabel untuk menyimpan jenis kelamin pakaian
    
    public:
        // konstruktor default kelas Clothing
        Clothing(){
            this->size = ""; // menginisialisasi ukuran dengan string kosong
            this->material = ""; // menginisialisasi bahan dengan string kosong
            this->gender = ""; // menginisialisasi jenis kelamin dengan string kosong
        }

        // konstruktor kelas Clothing dengan parameter
        Clothing(string size, string material, string gender){
            this->size = size; // menginisialisasi ukuran dengan nilai dari parameter size
            this->material = material; // menginisialisasi bahan dengan nilai dari parameter material
            this->gender = gender; // menginisialisasi jenis kelamin dengan nilai dari parameter gender
        }

        // metode untuk mengatur nilai ukuran pakaian
        void set_size(string size){
            this->size = size; // mengatur nilai ukuran dengan nilai dari parameter size
        }

        // metode untuk mengembalikan nilai ukuran pakaian
        string get_size(){
            return this->size; // mengembalikan nilai ukuran
        }

        // metode untuk mengatur nilai bahan pakaian
        void set_material(string material){
            this->material = material; // mengatur nilai bahan dengan nilai dari parameter material
        }

        // metode untuk mengembalikan nilai bahan pakaian
        string get_material(){
            return this->material; // mengembalikan nilai bahan
        }

        // metode untuk mengatur nilai jenis kelamin pakaian
        void set_gender(string gender){
            this->gender = gender; // mengatur nilai jenis kelamin dengan nilai dari parameter gender
        }

        // metode untuk mengembalikan nilai jenis kelamin pakaian
        string get_gender(){
            return this->gender; // mengembalikan nilai jenis kelamin
        }
};
