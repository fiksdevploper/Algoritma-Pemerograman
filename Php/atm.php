<?php
$nama = readline("Masukkan nama Anda: ");

// validasi nama 
while (true){
    echo "Hallo, $nama! Apakah nama kamu sudah benar? (y/n): ";
    $konfirmasi = trim(fgets(STDIN));

    if ($konfirmasi == 'y' || $konfirmasi == 'Y') {
        break;
    } elseif ($konfirmasi == 'n' || $konfirmasi == 'N') {
        $nama = readline("Masukkan nama Anda kembali: ");
    } else {
        echo "Input tidak valid. Silakan masukkan 'y' untuk ya atau 'n' untuk tidak.\n";
    }
}

$saldo = readline("Masukkan saldo awal Anda: Rp ");

echo "Selamat datang di ATM, $nama!\n";
echo "Saldo awal Anda: Rp $saldo\n";

echo "Pilih operasi yang ingin Anda lakukan:\n";
echo "1. Cek Saldo\n";
echo "2. Tarik Tunai\n";
echo "3. Transfer\n";
echo "4. Keluar\n";

$pilihan = readline("Masukkan pilihan Anda (1-4): ");

switch ($pilihan) {
    case '1':
        echo "Saldo Anda saat ini: Rp $saldo\n";
        break;

    case '2':
        $jumlah = readline("Masukkan jumlah uang yang ingin Anda tarik: Rp ");
        if ($jumlah > $saldo) {
            echo "Saldo tidak mencukupi. Saldo Anda saat ini: Rp $saldo\n";
        } else {
            $saldo -= $jumlah;
            echo "Uang Anda berhasil ditarik. Saldo Anda saat ini: Rp $saldo\n";
        }
        break;

    case '3':
        $rekening = readline("Masukkan nomor rekening tujuan: ");
        $jumlah = readline("Masukkan jumlah uang yang ingin Anda transfer: Rp ");
        if ($jumlah > $saldo) {
            echo "Saldo tidak mencukupi. Saldo Anda saat ini: Rp $saldo\n";
        } else {
            $saldo -= $jumlah;
            echo "Uang sebesar Rp $jumlah berhasil ditransfer ke rekening $rekening. Saldo Anda saat ini: Rp $saldo\n";
        }
        break;

    case '4':
        echo "Terima kasih telah menggunakan ATM kami. Sampai jumpa!\n";
        break;
        
    default:
        echo "Pilihan tidak valid. Silakan masukkan angka 1-4.\n";
        break;
}
?>