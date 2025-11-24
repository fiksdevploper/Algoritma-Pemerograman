<?php
function getInput(string $prompt): string
{
    return readline($prompt);
}

$NamaBarang = getInput("Masukan nama Barang belanjaan kamu: ");
$HargaBarang = (int)getInput("Masukan harga barang belanjaan kamu: "); 
$JumlahBarang = (int)getInput("Masukan jumlah barang belanjaan kamu: ");

$TotalBelanjaan = $HargaBarang * $JumlahBarang;
$JumlahDiskon = 0;

if ($HargaBarang > 16200) {
    $HargaSetelahDiskon = $HargaBarang - ($HargaBarang * 0.02);
    $JumlahDiskon = $HargaSetelahDiskon; 
} else {
    $JumlahDiskon = $HargaBarang; 
}

$TotalDiskon = $TotalBelanjaan - $JumlahDiskon; 

echo "=========Struk Pembelian============\n";
echo "Nama Barang : " . $NamaBarang . "\n";
echo "Harga Satuan: Rp " . number_format($HargaBarang, 2, ',', '.') . "\n";
echo "Jumlah      : " . $JumlahBarang . "\n";
echo "Total       : Rp " . number_format($TotalBelanjaan, 2, ',', '.') . "\n";
echo "Diskon      : Rp " . number_format($JumlahDiskon, 2, ',', '.') . "\n"; 
echo "Total Bayar : Rp " . number_format($TotalDiskon, 2, ',', '.') . "\n"; 
echo "====================================\n";

?>