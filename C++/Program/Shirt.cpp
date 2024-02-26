/*
    Saya Revana Faliha Salma NIM 2202869 mengerjakan Soal Latihan 2 
    dalam mata kuliah DPBO untuk keberkahanNya maka saya tidak 
    melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include <iostream>
#include <string>
#include "Clothing.cpp"

using namespace std;

// deklarasi kelas Shirt yang merupakan turunan dari kelas Clothing
class Shirt : public Clothing{
    private:
        string color; // variabel untuk menyimpan warna kemeja
        string sleeveType; // variabel untuk menyimpan jenis lengan kemeja

    public:
        // konstruktor default kelas Shirt
        Shirt(){
            this->color = ""; // menginisialisasi warna dengan string kosong
            this->sleeveType = ""; // menginisialisasi jenis lengan dengan string kosong
        }

        // konstruktor kelas Shirt dengan parameter
        Shirt(string color, string type){
            this->color = color; // menginisialisasi warna dengan nilai dari parameter color
            this->sleeveType = type; // menginisialisasi jenis lengan dengan nilai dari parameter type
        }

        // metode untuk mengatur nilai warna kemeja
        void set_color(string color){
            this->color = color; // mengatur nilai warna dengan nilai dari parameter color
        }

        // metode untuk mengembalikan nilai warna kemeja
        string get_color(){
            return this->color; // mengembalikan nilai warna
        }
        
        // metode untuk mengatur nilai jenis lengan kemeja
        void set_sleeveType(string type){
            this->sleeveType = type; // mengatur nilai jenis lengan dengan nilai dari parameter type
        }

        // metode untuk mengembalikan nilai jenis lengan kemeja
        string get_sleeveType(){
            return this->sleeveType; // mengembalikan nilai jenis lengan
        }

        // destruktor kelas Shirt
        ~Shirt(){

        }
};
