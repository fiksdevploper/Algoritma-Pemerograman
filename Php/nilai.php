<?php 
$tugas = readline("Menampilkan Nilai");
$uts = readline("Masukkan Nilai UTS : ");
$uas = readline("Masukkan Nilai UAS : ");

$nilaiAkhir = (0.3*$tugas) + (0.3*$uts) + (0.4*$uas);

echo "Nilai Akhir: " . $nilaiAkhir . "\n";

if ($nilaiAkhir >= 60) {
    echo "Lulus\n";
} else {
    echo "Tidak Lulus\n";
}

?>