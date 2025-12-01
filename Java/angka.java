import  java.util.Scanner;
public class angka {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Masukkan sebuah angka: ");
        int a = sc.nextInt();
        System.out.print("Angka yang dimasukkan: " + a);
        int b = sc.nextInt();

        if (a>b)
            System.out.println(a + "Lebih besar dari: " + b);
        else if (a < b)
            System.out.println(a + "Lebih kecil dari: " + b);
        else
            System.out.println("Keduanya sama besar: ");
            System.out.println("Apakah keduanya sama?" + (a == b));
    }
}
