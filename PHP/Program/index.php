<!-- Saya Revana Faliha Salma NIM 2202869 mengerjakan Soal Latihan 2 dalam mata kuliah DPBO 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin. -->

<?php

require('Shirt.php');

// membuat array untuk menyimpan data produk shirt
$produk = array();

// menambahkan data produk shirt ke dalam array
$produk[] = new Shirt("ID067", "Kaos Angel", "Zara", "230000", "L", "Katun", "Perempuan", "Pink", "Panjang");
$produk[] = new Shirt("ID891", "Kaos Caith", "LV", "5500000", "M", "Katun", "Laki-Laki", "Yellow", "Pendek");
$produk[] = new Shirt("ID271", "Kaos Cleo", "Abay Fashion", "120000", "S", "Katun", "Perempuan", "Green", "Pendek");

echo "<h2>Data Produk Terkini</h2>";

// membuat tabel HTML untuk menampilkan data shirt DPR
echo "<table border='1'>";
echo "<tr style='background-color: #add8e6;'>
        <th>No</th>
        <th>ID Produk</th>
        <th>Nama Produk</th>
        <th>Brand Produk</th>
        <th>Harga Produk</th>
        <th>Ukuran Produk</th>
        <th>Bahan Produk</th>
        <th>Tujuan Produk</th>
        <th>Warna Produk</th>
        <th>Tipe Lengan Produk</th>
      </tr>";

// menampilkan data produk shirt 
$i = 1;
foreach ($produk as $shirt) {
    echo "<tr>";
    echo "<td>$i</td>";
    echo "<td>" . $shirt->getId() . "</td>";
    echo "<td>" . $shirt->getName() . "</td>";
    echo "<td>" . $shirt->getBrand() . "</td>";
    echo "<td>" . $shirt->getPrice() . "</td>";
    echo "<td>" . $shirt->getSize() . "</td>";
    echo "<td>" . $shirt->getMaterial() . "</td>";
    echo "<td>" . $shirt->getGender() . "</td>";
    echo "<td style='background-color: " . $shirt->getColor() . ";'>" . $shirt->getColor() . "</td>";
    echo "<td>" . $shirt->getType() . "</td>";
    echo "</tr>";
    $i++;
}

echo "</table>";

?>