public class GenericPrinterTest {
    public static void main(String[] args) {
        GenericPrinter<Powder> powderPrinter = new GenericPrinter<Powder>();
        powderPrinter.setMaterial(new Powder());
        System.out.println(powderPrinter);
        Powder powder = powderPrinter.getMaterial();
        System.out.println(powder);

        GenericPrinter<Plastic> plasticPrinter = new GenericPrinter<Plastic>();
        plasticPrinter.setMaterial(new Plastic());
        System.out.println(plasticPrinter);
        Plastic plastic = plasticPrinter.getMaterial();
        System.out.println(plastic);
    }
}
