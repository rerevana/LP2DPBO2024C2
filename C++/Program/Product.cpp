/*
    Saya Revana Faliha Salma NIM 2202869 mengerjakan Soal Latihan 2 
    dalam mata kuliah DPBO untuk keberkahanNya maka saya tidak 
    melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include <iostream>
#include <string> 

using namespace std; 

// mendefinisikan kelas Product
class Product{ 
    // bagian pribadi dari kelas Product
    private: 
        string id_Product; // variabel untuk menyimpan ID produk
        string name; // variabel untuk menyimpan nama produk
        string brand; // variabel untuk menyimpan merek produk
        int price; // variabel untuk menyimpan harga produk

    // bagian publik dari kelas Product
    public: 
        // konstruktor default kelas Product
        Product(){ 
            this->id_Product = ""; // menginisialisasi id_Product dengan string kosong
            this->name = ""; // enginisialisasi name dengan string kosong
            this->brand = ""; // enginisialisasi brand dengan string kosong
            this->price = 0; // menginisialisasi price dengan nilai 0
        }

        // konstruktor kelas Product dengan parameter
        Product(string id, string name, string brand, int price){ 
            this->id_Product = id; // menginisialisasi id_Product dengan nilai dari parameter id
            this->name = name; // menginisialisasi name dengan nilai dari parameter name
            this->brand = brand; // menginisialisasi brand dengan nilai dari parameter brand
            this->price = price; // menginisialisasi price dengan nilai dari parameter price
        }

        // metode untuk mengatur nilai id_Product
        void set_id(string id){ 
            this->id_Product = id; // mengatur nilai id_Product dengan nilai dari parameter id
        }

        // metode untuk mengembalikan nilai id_Product
        string get_id(){ 
            return this->id_Product; // mengembalikan nilai id_Product
        }

        // metode untuk mengatur nilai name
        void set_name(string name){ 
            this->name = name; // mengatur nilai name dengan nilai dari parameter name
        }

        // metode untuk mengembalikan nilai name
        string get_name(){ 
            return this->name; // mengembalikan nilai name
        }

        // metode untuk mengatur nilai brand
        void set_brand(string brand){ 
            this->brand = brand; // mengatur nilai brand dengan nilai dari parameter brand
        }

        // metode untuk mengembalikan nilai brand
        string get_brand(){ 
            return this->brand; // mengembalikan nilai brand
        }

        // metode untuk mengatur nilai price
        void set_price(int price){ 
            this->price = price; // mengatur nilai price dengan nilai dari parameter price
        }

        // metode untuk mengembalikan nilai price
        int get_price(){ 
            return this->price; // mengembalikan nilai price
        }

        // destruktor kelas Product
        ~Product(){ 
           
        }
};
