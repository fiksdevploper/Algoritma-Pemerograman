# membuat variabel global 
nama = "Muhammad FIkri" 
Pekerjaan = "Machine learning & Data Science" 

def help(): 
    # ini variabel lokal 
    nama = "Muhammad Fikri" 
    Pekerjaan = "Machine learning & Data Science" 
    # mengakses variabel lokal 
    print ('Nama: %s' % nama) 
    print ('Pekerjaan: %s' % Pekerjaan) 

# mengakses variabel global 
print ('Nama: %s' % nama) 
print ('Pekerjaan: %s' % Pekerjaan) 

# memanggil fungsi help() 
help()