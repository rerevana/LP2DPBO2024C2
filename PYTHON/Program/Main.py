# Saya Revana Faliha Salma NIM 2202869 mengerjakan Soal Latihan 2 
# dalam mata kuliah DPBO untuk keberkahanNya maka saya tidak 
# melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

from Shirt import Shirt     # mengimpor kelas Shirt dari file Shirt.py

list_shirts = []    # membuat list kosong untuk menyimpan objek Shirt

n = int(input("Masukkan banyak data produk: ")) # meminta pengguna untuk memasukkan jumlah data produk

print("\nSILAHKAN MASUKKAN DATA PRODUK")

# looping untuk meminta input data produk sebanyak n kali
for i in range(1, n + 1):
    shirt = Shirt() # membuat objek baru dari kelas Shirt

    print(f"\nMasukkan data produk ke-{i}:")
    shirt.id = input("Id Produk: ")
    shirt.name = input("Nama Produk: ")
    shirt.brand = input("Brand Produk: ")
    shirt.price = int(input("Harga Produk: "))
    shirt.size = input("Ukuran Produk: ")
    shirt.material = input("Bahan Produk: ")
    shirt.gender = input("Tujuan Produk: ")
    shirt.color = input("Warna Produk: ")
    shirt.sleeveType = input("Tipe Lengan Produk: ")

    list_shirts.append(shirt)   # menambahkan objek Shirt ke dalam list_shirts

# inisialisasi lebar header dengan panjang teks
header_widths = {
    "ID Produk": len("ID Produk"),
    "Nama Produk": len("Nama Produk"),
    "Brand": len("Brand"),
    "Harga": len("Harga"),
    "Ukuran": len("Ukuran"),
    "Bahan": len("Bahan"),
    "Gender": len("Gender"),
    "Warna": len("Warna"),
    "Tipe Lengan": len("Tipe Lengan")
}

# mengecek dan memperbarui lebar header untuk setiap kolom
for shirt in list_shirts:
    header_widths["ID Produk"] = max(header_widths["ID Produk"], len(shirt.id))
    header_widths["Nama Produk"] = max(header_widths["Nama Produk"], len(shirt.name))
    header_widths["Brand"] = max(header_widths["Brand"], len(shirt.brand))
    header_widths["Harga"] = max(header_widths["Harga"], len(str(shirt.price)))
    header_widths["Ukuran"] = max(header_widths["Ukuran"], len(shirt.size))
    header_widths["Bahan"] = max(header_widths["Bahan"], len(shirt.material))
    header_widths["Gender"] = max(header_widths["Gender"], len(shirt.gender))
    header_widths["Warna"] = max(header_widths["Warna"], len(shirt.color))
    header_widths["Tipe Lengan"] = max(header_widths["Tipe Lengan"], len(shirt.sleeveType))

# menampilkan header tabel
print("\n\nDATA PRODUK TERKINI")
print("+====+" + "+".join("=" * (width + 2) for width in header_widths.values()) + "+")
print("| No | " + " | ".join("{:<{}}".format(header, width) for header, width in header_widths.items()) + " |")
print("+====+" + "+".join("=" * (width + 2) for width in header_widths.values()) + "+")

# menampilkan baris data
for i, shirt in enumerate(list_shirts):
    print("| {:<2} | {:<{}} | {:<{}} | {:>{}} | {:<{}} | {:<{}} | {:<{}} | {:<{}} | {:<{}} | {:<{}} |".format(
        i + 1, shirt.id, header_widths["ID Produk"], shirt.name, header_widths["Nama Produk"],
        shirt.brand, header_widths["Brand"], shirt.price, header_widths["Harga"],
        shirt.size, header_widths["Ukuran"], shirt.material, header_widths["Bahan"],
        shirt.gender, header_widths["Gender"], shirt.color, header_widths["Warna"],
        shirt.sleeveType, header_widths["Tipe Lengan"]
    ))
    print("+====+" + "+".join("=" * (width + 2) for width in header_widths.values()) + "+")