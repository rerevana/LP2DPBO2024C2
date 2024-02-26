<!-- Saya Revana Faliha Salma NIM 2202869 mengerjakan Soal Latihan 2 dalam mata kuliah DPBO 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin. -->


<?php

require('Clothing.php'); // mengimpor file Clothing.php yang berisi definisi kelas Clothing

// mendefinisikan kelas Shirt yang merupakan turunan dari kelas Clothing
class Shirt extends Clothing{ 
    private $color = ''; // variabel untuk menyimpan warna kemeja, diinisialisasi dengan string kosong
    private $sleeveType = ''; // variabel untuk menyimpan jenis lengan kemeja, diinisialisasi dengan string kosong

    // konstruktor kelas Shirt dengan parameter
    public function __construct($id, $nama, $brand, $harga, $size, $material, $gender, $color, $type){ 
        $this->color = $color; // menginisialisasi warna kemeja dengan nilai dari parameter $color
        $this->sleeveType = $type; // menginisialisasi jenis lengan kemeja dengan nilai dari parameter $type
        parent::__construct($id, $nama, $brand, $harga, $size, $material, $gender); // memanggil konstruktor kelas induk (Clothing) dengan parameter yang sesuai
    }

    // metode untuk mengatur nilai warna kemeja
    public function setColor($color){ 
        $this->color = $color; // mengatur nilai warna kemeja dengan nilai dari parameter $color
    }

    // metode untuk mengembalikan nilai warna kemeja
    public function getColor(){ 
        return $this->color; // mengembalikan nilai warna kemeja
    }

    // metode untuk mengatur nilai jenis lengan kemeja
    public function setType($type){
        $this->sleeveType = $type; // mengatur nilai jenis lengan kemeja dengan nilai dari parameter $type
    }

    // metode untuk mengembalikan nilai jenis lengan kemeja
    public function getType(){ 
        return $this->sleeveType; // mengembalikan nilai jenis lengan kemeja
    }

}

?>