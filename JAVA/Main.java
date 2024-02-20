import java.util.Scanner;
import java.util.ArrayList;
import java.util.Iterator;

public class Main{
    public static void main(String[] args){
        int i;  // inisialisasi variabel untuk iterator

        ArrayList<Shirt> list = new ArrayList<>();  // membuat objek ArrayList untuk menyimpan objek Shirt

        Scanner sc = new Scanner(System.in);    // membuat objek Scanner untuk input dari pengguna

        System.out.println("\nSILAHKAN MASUKKAN DATA PRODUK\n");

        // loop untuk meminta input produk pertama
        for(i = 0; i < 1; i++){
            // meminta input data produk dari pengguna
            System.out.print("Id Produk: ");
            String id_Product = sc.next();
            System.out.print("Nama Produk: ");
            String name = sc.next();
            System.out.print("Brand Produk: ");
            String brand = sc.next();
            System.out.print("Harga Produk: ");
            int price = sc.nextInt();
            System.out.print("Ukuran Produk: ");
            String size = sc.next();
            System.out.print("Bahan Produk: ");
            String material = sc.next();
            System.out.print("Tujuan Produk: ");
            String gender = sc.next();
            System.out.print("Warna Produk: ");
            String color = sc.next();
            System.out.print("Tipe Lengan Produk: ");
            String type = sc.next();

            // membuat objek Shirt baru dan mengatur nilainya menggunakan setter
            Shirt angel = new Shirt();
            angel.setId(id_Product); angel.setName(name); angel.setBrand(brand); angel.setPrice(price);
            angel.setSize(size); angel.setGender(gender); angel.setColor(color); angel.setSleeveType(type);
            angel.setMaterial(material);

            // menambahkan objek Shirt ke dalam ArrayList
            list.add(angel);
        }

        System.out.println("");

        // loop untuk meminta input produk kedua
        for(i = 0; i < 1; i++){
            // meminta input data produk dari pengguna
            System.out.print("Id Produk: ");
            String id_Product = sc.next();
            System.out.print("Nama Produk: ");
            String name = sc.next();
            System.out.print("Brand Produk: ");
            String brand = sc.next();
            System.out.print("Harga Produk: ");
            int price = sc.nextInt();
            System.out.print("Ukuran Produk: ");
            String size = sc.next();
            System.out.print("Bahan Produk: ");
            String material = sc.next();
            System.out.print("Tujuan Produk: ");
            String gender = sc.next();
            System.out.print("Warna Produk: ");
            String color = sc.next();
            System.out.print("Tipe Lengan Produk: ");
            String type = sc.next();

            // membuat objek Shirt baru dan mengatur nilainya menggunakan setter
            Shirt cleo = new Shirt();
            cleo.setId(id_Product); cleo.setName(name); cleo.setBrand(brand); cleo.setPrice(price);
            cleo.setSize(size); cleo.setGender(gender); cleo.setColor(color); cleo.setSleeveType(type);
            cleo.setMaterial(material);

            // menambahkan objek Shirt ke dalam ArrayList
            list.add(cleo);
            
        }

        System.out.println("");

        // loop untuk meminta input produk ketiga
        for(i = 0; i < 1; i++){
            // meminta input data produk dari pengguna
            System.out.print("Id Produk: ");
            String id_Product = sc.next();
            System.out.print("Nama Produk: ");
            String name = sc.next();
            System.out.print("Brand Produk: ");
            String brand = sc.next();
            System.out.print("Harga Produk: ");
            int price = sc.nextInt();
            System.out.print("Ukuran Produk: ");
            String size = sc.next();
            System.out.print("Bahan Produk: ");
            String material = sc.next();
            System.out.print("Tujuan Produk: ");
            String gender = sc.next();
            System.out.print("Warna Produk: ");
            String color = sc.next();
            System.out.print("Tipe Lengan Produk: ");
            String type = sc.next();

            // membuat objek Shirt baru dan mengatur nilainya menggunakan setter
            Shirt caith = new Shirt();
            caith.setId(id_Product); caith.setName(name); caith.setBrand(brand); caith.setPrice(price);
            caith.setSize(size); caith.setGender(gender); caith.setColor(color); caith.setSleeveType(type);
            caith.setMaterial(material);

            list.add(caith);
            
        }

        // menampilkan header untuk tabel produk
        System.out.println("\n\n\t\t\t\t\t\t\t\t\t   DATA PRODUK TERKINI");
        System.out.println("+====+===============+===========================+=================+===============+================+===============+================+===============+=====================+");
        System.out.println("| No |   ID Produk   |        Nama Produk        |      Brand      |     Harga     |     Ukuran     |     Bahan     |     Gender     |     Warna     |     Tipe Lengan     |");
        System.out.println("+====+===============+===========================+=================+===============+================+===============+================+===============+=====================+");

        // loop untuk mencetak setiap produk dalam ArrayList sebagai baris tabel
        for(i = 0; i < list.size(); i++){
            Shirt temp = list.get(i);   // deklarasi variabel temp dengan tipe Shirt, yang akan menyimpan objek Shirt yang diambil dari ArrayList menggunakan indeks i
            System.out.printf("| %2d | %13s | %25s | %15s | %13d | %14s | %13s | %14s | %13s | %19s |\n", i + 1, temp.getId(), temp.getName(), temp.getBrand(), temp.getPrice(), temp.getSize(), temp.getMaterial(), temp.getGender(), temp.getColor(), temp.getSleeveType());
            System.out.println("+====+===============+===========================+=================+===============+================+===============+================+===============+=====================+");
        }

        // menutup objek Scanner setelah selesai digunakan
        sc.close();
    }
}