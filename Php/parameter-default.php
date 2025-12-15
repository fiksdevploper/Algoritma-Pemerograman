<?php
// membuat fungsi 
function perkenalan($nama, $salam = "Assalamualaikum")
{
    echo $salam . ", ";
    echo "Perkenalkan, nama saya " . $nama . "<br/>";
    echo "Senang berkenalan dengan anda<br/>";
}
// memanggil fungsi yang sudah dibuat 
perkenalan("Muhammad Fikri", "Hi");
echo "<hr>";
$saya = "Muhammad Fikri";
$ucapanSalam = "Selamat pagi";
// memanggilnya lagi tanpa mengisi parameter salam 
perkenalan($saya);