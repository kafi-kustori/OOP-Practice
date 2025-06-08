
import java.util.ArrayList;
import java.util.Collections;

class array_list {

    public static void main(String[] args) {

        ArrayList<String> Rivers = new ArrayList<>();
        Rivers.add("Padma");
        Rivers.add("Jamuna");
        Rivers.add("Meghna");
        Rivers.add("Surma");
        Rivers.add("Arialkha");

        for (String i : Rivers) {

            System.err.println(" " + i);

        }

        System.err.println("Printing third river");
        System.err.println(Rivers.get(2));

        // 1. Search for a river (check if a river is in the list)
        String riverToSearch = "Meghna";
        if (Rivers.contains(riverToSearch)) {
            System.out.println(riverToSearch + " is found in the list.");
        } else {
            System.out.println(riverToSearch + " is not in the list.");
        }

        // 2. Find the index of a particular river
        int index = Rivers.indexOf(riverToSearch);
        if (index != -1) {
            System.out.println("The position (index) of " + riverToSearch + " is: " + index);
        } else {
            System.out.println(riverToSearch + " is not in the list.");
        }

        // 3. Remove a particular river
        String riverToRemove = "Jamuna";
        if (Rivers.remove(riverToRemove)) {
            System.out.println(riverToRemove + " has been removed from the list.");
        } else {
            System.out.println(riverToRemove + " was not found in the list.");
        }

        // Print the list after removal
        System.out.println("List of rivers after removal: " + Rivers);

        // 4. Sort the rivers
        Collections.sort(Rivers);
        System.out.println("Sorted list of rivers: " + Rivers);

        // 5. Remove all rivers
        Rivers.clear();
        System.out.println("List after removing all rivers: " + Rivers);

    }

}
