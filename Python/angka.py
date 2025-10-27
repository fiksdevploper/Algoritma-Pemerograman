a = int(input("Maukan angka pertama: "))
b = int(input("Masukan angka kedua: "))

if a > b:
    print(a, "adalah angka terbesar.", b)
elif a < b:
    print(b, "adalah angka terbesar.", a)
else:
    print("Kedua angka sama besar:")

print("Apakah keduanya sama?", a == b)