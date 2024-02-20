/*
    Saya Revana Faliha Salma NIM 2202869 mengerjakan Soal Latihan 2 
    dalam mata kuliah DPBO untuk keberkahanNya maka saya tidak 
    melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

public class Product{
    private String id_Product;  // deklarasi variabel untuk menyimpan ID produk
    private String name;    // deklarasi variabel untuk menyimpan nama produk
    private String brand;   // deklarasi variabel untuk menyimpan merek produk
    private int price;  // deklarasi variabel untuk menyimpan harga produk

    // konstruktor kosong
    Product(){

    }

    // konstruktor parameter untuk menginisialisasi objek Product dengan nilai yang diberikan
    public Product(String id, String nama, String brand, int harga){
        this.id_Product = id;   // inisialisasi ID produk
        this.name = nama;   // inisialisasi nama produk
        this.brand = brand; // inisialisasi merek produk
        this.price = harga; // inisialisasi harga produk
    }

    // metode setter untuk mengatur ID produk
    public void setId(String id){
        this.id_Product = id;
    }

    // metode getter untuk mendapatkan ID produk
    public String getId(){
        return this.id_Product;
    }
    
    // metode setter untuk mengatur nama produk
    public void setName(String name){
        this.name = name;
    }

    // metode getter untuk mendapatkan nama produk
    public String getName(){
        return this.name;
    }

    // metode setter untuk mengatur merek produk
    public void setBrand(String brand){
        this.brand = brand;
    }

    // metode getter untuk mendapatkan merek produk
    public String getBrand(){
        return this.brand;
    }

    // metode setter untuk mengatur harga produk
    public void setPrice(int price){
        this.price = price;
    }

    // metode getter untuk mendapatkan harga produk
    public int getPrice(){
        return this.price;
    }
}