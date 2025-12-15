
public class variabel_fungsi {
    // ini variabel global
    static String makanan = "Soto Bogor";
    static void makes() {
    // ini variabel lokal 
        String makanan = "Nasi Padang";

    // mengakses variabel makanan di dalam fungsi makes() 
        System.out.println("Makanan Kesukaan : " + makanan);
    }

    public static void main(String args[]) {
    // panggil fungsi makes() 
        makes();
        System.out.println("Makanan Lainnya : " + makanan);
    }
}
