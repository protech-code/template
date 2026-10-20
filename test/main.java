public class Main {
    public static void main(String[] args) {
        String name = "Minh Duc";
        int year = 2026;
        
        System.out.println("Hello, " + name + "! Welcome to Java project v" + year + ".");
        
        int[] numbers = {10, 20, 30, 40, 50};
        int sum = 0;
        
        for(int n : numbers) {
            sum += n;
        }
        
        System.out.println("Total sum: " + sum);
    }
}