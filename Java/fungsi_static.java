public class fungsi_static {
    // Fungsi static
    static void minum(String minuman) {
        System.out.println("Saya suka minum " + minuman);
    }

    // Fungsi non-static 
    void makan(String makanan) {
        System.out.println("Saya suka makan " + makanan);
    }

    // fungsi main 
    public static void main(String[] args) {
    // pemanggilan fungsi static 
        minum("kopi exspresso");

    // mambuat instansiasi objek saya dari class FungsiStatic 
        fungsi_static saya = new fungsi_static();
    // pemanggilan fungsi non-static 
        saya.makan("nasi goreng");
    }
}
