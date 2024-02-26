/*
    Saya Revana Faliha Salma NIM 2202869 mengerjakan Soal Latihan 2 
    dalam mata kuliah DPBO untuk keberkahanNya maka saya tidak 
    melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include <iostream>
#include <iomanip>
#include <vector>
#include "Shirt.cpp"

using namespace std;

int main() {
    int i; // inisialisasi variabel untuk iterator

    vector<Shirt> list; // membuat vector untuk menyimpan objek Shirt

    int n;

    cout << "Masukkan banyak data yang diinginkan: ";
    cin >> n;

    cout << "\nSILAHKAN MASUKKAN DATA PRODUK\n";

    // loop untuk meminta input produk pertama
    for (i = 0; i < n; i++) {
        // meminta input data produk dari pengguna
        string id_Product, name, brand, size, material, gender, color, type;
        int price;

        cout << "\nMasukkan data untuk produk ke-" << i + 1 << endl;
        
        cout << "Id Produk: ";
        cin >> id_Product;
        cout << "Nama Produk: ";
        cin >> name;
        cout << "Brand Produk: ";
        cin >> brand;
        cout << "Harga Produk: ";
        cin >> price;
        cout << "Ukuran Produk: ";
        cin >> size;
        cout << "Bahan Produk: ";
        cin >> material;
        cout << "Tujuan Produk: ";
        cin >> gender;
        cout << "Warna Produk: ";
        cin >> color;
        cout << "Tipe Lengan Produk: ";
        cin >> type;

        // membuat objek Shirt baru dan mengatur nilainya menggunakan setter
        Shirt produk;
        produk.set_id(id_Product); produk.set_name(name); produk.set_brand(brand); produk.set_price(price);
        produk.set_size(size); produk.set_gender(gender); produk.set_color(color); produk.set_sleeveType(type);
        produk.set_material(material);

        // menambahkan objek Shirt ke dalam vector
        list.push_back(produk);
    }

    // menentukan panjang maksimum untuk setiap kolom
    size_t max_num = 4; // Lebar kolom untuk nomor
    size_t max_id = 9; // Panjang maksimum ID Produk
    size_t max_name = 12; // Panjang maksimum Nama Produk
    size_t max_brand = 10; // Panjang maksimum Brand
    size_t max_price = 11; // Panjang maksimum Harga Produk
    size_t max_size = 10; // Panjang maksimum Ukuran Produk
    size_t max_material = 12; // Panjang maksimum Bahan Produk
    size_t max_gender = 11; // Panjang maksimum Tujuan Produk
    size_t max_color = 11; // Panjang maksimum Warna Produk
    size_t max_type = 16; // Panjang maksimum Tipe Lengan Produk

    // Loop untuk mencari panjang maksimum dari setiap kolom
    for (auto& shirt : list) {
        max_id = max(max_id, shirt.get_id().size());
        max_name = max(max_name, shirt.get_name().size());
        max_brand = max(max_brand, shirt.get_brand().size());
        max_price = max(max_price, to_string(shirt.get_price()).size());
        max_size = max(max_size, shirt.get_size().size());
        max_material = max(max_material, shirt.get_material().size());
        max_gender = max(max_gender, shirt.get_gender().size());
        max_color = max(max_color, shirt.get_color().size());
        max_type = max(max_type, shirt.get_sleeveType().size());
    }

    // menampilkan header untuk tabel produk
    cout << "\n\nDATA PRODUK TERKINI" << endl;
    cout << "+" << string(max_num + 2, '=') << "+" << string(max_id + 2, '=') << "+" << string(max_name + 2, '=') << "+" << string(max_brand + 2, '=') << "+" << string(max_price + 2, '=') << "+" << string(max_size + 2, '=') << "+" << string(max_material + 2, '=') << "+" << string(max_gender + 2, '=') << "+" << string(max_color + 2, '=') << "+" << string(max_type + 2, '=') << "+" << endl;
    cout << "| " << setw(max_num) << "No" << " | " << setw(max_id) << "ID Produk" << " | " << setw(max_name) << "Nama Produk" << " | " << setw(max_brand) << "Brand" << " | " << setw(max_price) << "Harga" << " | " << setw(max_size) << "Ukuran" << " | " << setw(max_material) << "Bahan" << " | " << setw(max_gender) << "Tujuan" << " | " << setw(max_color) << "Warna" << " | " << setw(max_type) << "Tipe Lengan" << " |" << endl;
    cout << "+" << string(max_num + 2, '-') << "+" << string(max_id + 2, '-') << "+" << string(max_name + 2, '-') << "+" << string(max_brand + 2, '-') << "+" << string(max_price + 2, '-') << "+" << string(max_size + 2, '-') << "+" << string(max_material + 2, '-') << "+" << string(max_gender + 2, '-') << "+" << string(max_color + 2, '-') << "+" << string(max_type + 2, '-') << "+" << endl;

    // loop untuk mencetak setiap produk dalam vector sebagai baris tabel
    for (i = 0; i < list.size(); i++) {
        Shirt temp = list[i]; // menyimpan objek Shirt yang diambil dari vector menggunakan indeks i
        cout << "| " << setw(max_num) << i + 1 << " | " << setw(max_id) << temp.get_id() << " | " << setw(max_name) << temp.get_name() << " | " << setw(max_brand) << temp.get_brand() << " | " << setw(max_price) << temp.get_price() << " | " << setw(max_size) << temp.get_size() << " | " << setw(max_material) << temp.get_material() << " | " << setw(max_gender) << temp.get_gender() << " | " << setw(max_color) << temp.get_color() << " | " << setw(max_type) << temp.get_sleeveType() << " |" << endl;
        cout << "+" << string(max_num + 2, '-') << "+" << string(max_id + 2, '-') << "+" << string(max_name + 2, '-') << "+" << string(max_brand + 2, '-') << "+" << string(max_price + 2, '-') << "+" << string(max_size + 2, '-') << "+" << string(max_material + 2, '-') << "+" << string(max_gender + 2, '-') << "+" << string(max_color + 2, '-') << "+" << string(max_type + 2, '-') << "+" << endl;
    }

    return 0;
}
