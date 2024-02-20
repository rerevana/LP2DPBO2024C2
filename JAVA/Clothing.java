/*
    Saya Revana Faliha Salma NIM 2202869 mengerjakan Soal Latihan 2 
    dalam mata kuliah DPBO untuk keberkahanNya maka saya tidak 
    melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

class Clothing extends Product{
    private String size;    // deklarasi variabel untuk menyimpan ukuran pakaian
    private String material;    // deklarasi variabel untuk menyimpan bahan pakaian
    private String gender;  // deklarasi variabel untuk menyimpan jenis kelamin yang ditujukan pakaian

    // konstruktor kosong
    Clothing(){

    }

    // konstruktor parameter untuk menginisialisasi objek Clothing dengan nilai yang diberikan
    public Clothing(String size, String material, String gender){
        this.size = size;   // inisialisasi ukuran pakaian
        this.material = material;   // inisialisasi bahan pakaian
        this.gender = gender;   // inisialisasi jenis kelamin yang ditujukan pakaian
    }

    // metode setter untuk mengatur ukuran pakaian
    public void setSize(String size){
        this.size = size;
    }

    // metode getter untuk mendapatkan ukuran pakaian
    public String getSize(){
        return this.size;
    }

    // metode setter untuk mengatur bahan pakaian
    public void setMaterial(String mat){
        this.material = mat;
    }

    // metode getter untuk mendapatkan bahan pakaian
    public String getMaterial(){
        return this.material;
    }

    // metode setter untuk mengatur jenis kelamin yang ditujukan pakaian
    public void setGender(String gender){
        this.gender = gender;
    }

    // metode getter untuk mendapatkan jenis kelamin yang ditujukan pakaian
    public String getGender(){
        return this.gender;
    }
}