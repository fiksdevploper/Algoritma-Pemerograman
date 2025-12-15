# Variabel global untuk menyimpan data Buku 
buku = [] 

# fungsi untuk menampilkan semua data 
def show_data(): 
    print ('\n--- DATA BUKU ---')
    if len(buku) <= 0: 
        print ('BELUM ADA DATA') 
    else: 
        for indeks, judul in enumerate(buku): 
            print ('[%d] %s' % (indeks, judul)) 
    print ('------------------')

# fungsi untuk menambah data 
def insert_data(): 
    buku_baru = input('Judul Buku: ') 
    buku.append(buku_baru) 
    print(f'Judul "{buku_baru}" berhasil ditambahkan.')
def edit_data(): 
    show_data() 
    if len(buku) == 0:
        return # Keluar jika tidak ada data

    try:
        indeks = int(input('Inputkan ID buku yang akan di-edit: ')) 
    except ValueError:
        print('Input ID harus berupa angka.')
        return
        judul_baru = input('Judul baru: ') 
        buku[indeks] = judul_baru 
        print(f'Buku ID [{indeks}] berhasil diubah menjadi "{judul_baru}".')
    else: 
        print ('ID salah. Masukkan ID antara 0 sampai', len(buku) - 1)
def delete_data(): 
    show_data() 
    if len(buku) == 0:
        return 
    try:
        indeks = int(input('Inputkan ID buku yang akan dihapus: ')) 
    except ValueError:
        print('Input ID harus berupa angka.')
        return
    if 0 <= indeks < len(buku):
        judul_dihapus = buku.pop(indeks) 
        print(f'Buku ID [{indeks}] dengan judul "{judul_dihapus}" berhasil dihapus.')
    else: 
        print ('ID salah. Masukkan ID antara 0 sampai', len(buku) - 1)

# fungsi untuk menampilkan menu 
def show_menu(): 
    print ('\n') 
    print ('----------- MENU ----------') 
    print ('[1] Show Data') 
    print ('[2] Insert Data') 
    print ('[3] Edit Data') 
    print ('[4] Delete Data') 
    print ('[5] Exit') 
    print ('---------------------------')

    try:
        menu = input('PILIH MENU> ') 
        if menu == '1': 
            show_data() 
        elif menu == '2': 
            insert_data() 
        elif menu == '3': 
            edit_data() 
        elif menu == '4': 
            delete_data() 
        elif menu == '5': 
            print("Program selesai.")
            return True 
        else: 
            print ('Salah pilih! Masukkan angka 1-5.')
    except Exception as e:
        print('Terjadi kesalahan:', e)

    return False 

if __name__ == '__main__': 
    while(True): 
        keluar = show_menu()
        if keluar:
            break