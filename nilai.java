import java.util.Scanner;
public class nilai {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Masukkan nilai tugas: ");
        double tugas = sc.nextDouble();
        System.out.print("Masukkan nilai uts: ");
        double uts = sc.nextDouble();
        System.out.print("Masukkan nilai uas: ");
        double uas = sc.nextDouble();
        double nilaiAkhir = (0.3 * tugas) + (0.3 * uts) + (0.4 * uas);

        System.out.println("Nilai Akhir: " + nilaiAkhir);

        if (nilaiAkhir >= 60) 
            System.out.println("LULUS");
        else    
            System.out.println("TIDAK LULUS");

    }
}
