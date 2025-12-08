<?php

function print_digit_array(array $arr): void {
    echo "[";
    for ($i = 0; $i < count($arr); $i++) {
        echo $arr[$i] . ($i < count($arr) - 1 ? ", " : "");
    }
    echo "]\n";
}

function main(): void {
    echo "========================================\n";
    echo "PROGRAM ANALISIS DIGIT NIM\n";
    echo "========================================\n";
    echo "Masukkan NIM Anda: ";
    $nim_string = trim(fgets(STDIN));

    $digit_array = [];
    for ($i = 0; $i < strlen($nim_string); $i++) {
        $c = $nim_string[$i];
        if (ctype_digit($c)) {
            $digit_array[] = (int)$c;
        }
    }
    
    $N = count($digit_array);
    
    if ($N === 0) {
        fwrite(STDERR, "\nError: NIM tidak mengandung digit angka yang valid.\n");
        exit(1);
    }
    
    echo "\nNIM (String): " . $nim_string . "\n";
    echo "Array Digit: ";
    print_digit_array($digit_array);
    echo "Jumlah Digit: " . $N . "\n";
    echo "----------------------------------------\n";
    
    $total_digit = array_sum($digit_array);
    echo "Total Seluruh Digit: " . $total_digit . "\n";

    $maks_digit = max($digit_array);
    echo "Maksimum Digit: " . $maks_digit . "\n";

    $min_digit = min($digit_array);
    echo "Minimum Digit: " . $min_digit . "\n";
    
    $rata_rata = $total_digit / $N;
    echo "Rata-rata Digit: " . number_format($rata_rata, 4) . "\n";

    echo "----------------------------------------\n";

    $reversed_digit_array = array_reverse($digit_array); 
    
    echo "Urutan Digit Terbalik: ";
    print_digit_array($reversed_digit_array);
    
    echo "========================================\n";
}

main();

?>