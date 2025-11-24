NamaBarang = input("Masukan nama Barang belanjaan kamu: ")
HargaBarang = int(input("Masukan harga barang belanjaan kamu: "))
JumlahBarang = int(input("Masukan jumlah barang belanjaan kamu: "))

TotalBelajaan = HargaBarang * JumlahBarang

if HargaBarang > 16200:
    JumlahDiskon = HargaBarang - (HargaBarang * 0.02)
else:
    JumlahDiskonDiskon = 0

TotalDiskon = TotalBelajaan - JumlahDiskon

print ("=========Struk Pembelian============")
print(f"Nama Barang : {NamaBarang}")
print(f"Harga Satuan: Rp {HargaBarang:,.2f}")
print(f"Jumlah      : {JumlahBarang}")
print(f"Total       : Rp {TotalBelajaan:,.2f}")
print(f"Diskon      : Rp {JumlahDiskon:,.2f}")
print(f"Total Bayar : Rp {TotalDiskon:,.2f}")
print ("====================================")