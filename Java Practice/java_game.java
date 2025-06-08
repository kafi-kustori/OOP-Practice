
import java.util.Random;
import java.util.Scanner;

class java_game {

    public static void main(String[] args) {

        System.err.println("Guess the number ");
        Scanner scanner = new Scanner(System.in);

        Random random = new Random();
        int x = random.nextInt(100);

        int z = 0;

        while (true) {

            int y = scanner.nextInt();
            if (y < x) {
                System.err.println("Increase your number ");
            } else if (y > x) {
                System.err.println("Decrease your number ");
            } else if (y == x) {
                break;
            }

            z++;
        }

        System.err.println("Congrats !! Your have guessed right.");
        System.err.println(" Your number of guess is " + z);

    }

}
