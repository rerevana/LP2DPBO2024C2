<!-- Saya Revana Faliha Salma NIM 2202869 mengerjakan Soal Latihan 2 dalam mata kuliah DPBO 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin. -->

<?php

require('Product.php'); // mengimpor file Product.php yang berisi definisi kelas Product

// mendefinisikan kelas Clothing yang merupakan turunan dari kelas Product
class Clothing extends Product{ 
    private $size = ''; // variabel untuk menyimpan ukuran pakaian, diinisialisasi dengan string kosong
    private $material = ''; // variabel untuk menyimpan bahan pakaian, diinisialisasi dengan string kosong
    private $gender = ''; // variabel untuk menyimpan jenis kelamin pakaian, diinisialisasi dengan string kosong

    // konstruktor kelas Clothing dengan parameter
    public function __construct($size = '', $material = '', $gender = '', $id, $nama, $brand, $harga){ 
        $this->size = $size; // menginisialisasi ukuran pakaian dengan nilai dari parameter $size
        $this->material = $material; // menginisialisasi bahan pakaian dengan nilai dari parameter $material
        $this->gender = $gender; // menginisialisasi jenis kelamin pakaian dengan nilai dari parameter $gender
        parent::__construct($id, $nama, $brand, $harga); // memanggil konstruktor kelas induk (Product) dengan parameter yang sesuai
    }

    // metode untuk mengatur nilai ukuran pakaian
    public function setSize($size){ 
        $this->size = $size; // mengatur nilai ukuran pakaian dengan nilai dari parameter $size
    }

    // metode untuk mengembalikan nilai ukuran pakaian
    public function getSize(){ 
        return $this->size; // mengembalikan nilai ukuran pakaian
    }

    // metode untuk mengatur nilai bahan pakaian
    public function setMaterial($material){ 
        $this->material = $material; // mengatur nilai bahan pakaian dengan nilai dari parameter $material
    }

    // metode untuk mengembalikan nilai bahan pakaian
    public function getMaterial(){ 
        return $this->material; // mengembalikan nilai bahan pakaian
    }

    // metode untuk mengatur nilai jenis kelamin pakaian
    public function setGender($gender){ 
        $this->size = $gender; // mengatur nilai jenis kelamin pakaian dengan nilai dari parameter $gender
    }

    // metode untuk mengembalikan nilai jenis kelamin pakaian
    public function getGender(){ 
        return $this->gender; // mengembalikan nilai jenis kelamin pakaian
    }
}

?>


?>