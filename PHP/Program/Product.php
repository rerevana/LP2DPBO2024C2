<!-- Saya Revana Faliha Salma NIM 2202869 mengerjakan Soal Latihan 2 dalam mata kuliah DPBO 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin. -->

<?php

// mendefinisikan kelas Product
class Product{ 
    private $id_Product = ''; // variabel untuk menyimpan ID Produk, diinisialisasi dengan string kosong
    private $name = ''; // variabel untuk menyimpan nama Produk, diinisialisasi dengan string kosong
    private $brand = ''; // variabel untuk menyimpan merek Produk, diinisialisasi dengan string kosong
    private $price = ''; // variabel untuk menyimpan harga Produk, diinisialisasi dengan string kosong

    // konstruktor kelas Product dengan parameter default kosong
    public function __construct($id = '', $name = '', $brand = '', $price = ''){ 
        $this->id_Product = $id; // menginisialisasi ID Produk dengan nilai dari parameter $id
        $this->name = $name; // menginisialisasi nama Produk dengan nilai dari parameter $name
        $this->brand = $brand; // menginisialisasi merek Produk dengan nilai dari parameter $brand
        $this->price = $price; // menginisialisasi harga Produk dengan nilai dari parameter $price
    }

    // metode untuk mengatur nilai ID Produk
    public function setId($id){ 
        $this->id_Product = $id; // mengatur nilai ID Produk dengan nilai dari parameter $id
    }

    // metode untuk mengembalikan nilai ID Produk
    public function getId(){ 
        return $this->id_Product; // mengembalikan nilai ID Produk
    }

    // metode untuk mengatur nilai nama Produk
    public function setName($name){ 
        $this->name = $name; // mengatur nilai nama Produk dengan nilai dari parameter $name
    }

    // metode untuk mengembalikan nilai nama Produk
    public function getName(){ 
        return $this->name; // mengembalikan nilai nama Produk
    }

    // metode untuk mengatur nilai merek Produk
    public function setBrand($brand){ 
        $this->brand = $brand; // mengatur nilai merek Produk dengan nilai dari parameter $brand
    }

    // metode untuk mengembalikan nilai merek Produk
    public function getBrand(){ 
        return $this->brand; // mengembalikan nilai merek Produk
    }

    // metode untuk mengatur nilai harga Produk
    public function setPrice($price){ 
        $this->price = $price; // mengatur nilai harga Produk dengan nilai dari parameter $price
    }

    // metode untuk mengembalikan nilai harga Produk
    public function getPrice(){ 
        return $this->price; // mengembalikan nilai harga Produk
    }
}


?>