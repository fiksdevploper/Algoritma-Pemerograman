<?php
$a = readline("Masukan angka: ");
$b = readline("Masukan angka: ");

if ($a > $b) {
    echo "$a Angka terbesar adalah $b\n";
} elseif ($b > $a) {
    echo "$a Angka terbesar adalah $b\n";
} else {
    echo "Kedua angka sama besar\n";
}

echo "Apakah keduanya sama?";
echo ($a == $b) ? "true\n" : "false\n";
?>