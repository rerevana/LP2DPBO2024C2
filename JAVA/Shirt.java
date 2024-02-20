/*
    Saya Revana Faliha Salma NIM 2202869 mengerjakan Soal Latihan 2 
    dalam mata kuliah DPBO untuk keberkahanNya maka saya tidak 
    melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

class Shirt extends Clothing{
    private String color;   // deklarasi variabel untuk menyimpan warna kemeja
    private String sleeve_type; // deklarasi variabel untuk menyimpan tipe lengan kemeja

    // konstruktor kosong
    Shirt(){

    }

    // konstruktor parameter untuk menginisialisasi objek Shirt dengan nilai yang diberikan
    public Shirt(String color, String type){
        this.color = color;     // inisialisasi warna kemeja
        this.sleeve_type = type;    // inisialisasi tipe lengan kemeja
    }

    // metode setter untuk mengatur warna kemeja
    public void setColor(String color){
        this.color = color;
    }

    // metode getter untuk mendapatkan warna kemeja
    public String getColor(){
        return this.color;
    }

    // metode setter untuk mengatur tipe lengan kemeja
    public void setSleeveType(String type){
        this.sleeve_type = type;
    }

    // metode getter untuk mendapatkan tipe lengan kemeja
    public String getSleeveType(){
        return this.sleeve_type;
    }
}