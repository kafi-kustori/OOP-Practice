
class topic_1 {

    public static void main(String[] args) {

        for (Object elem : getMyArray()) {

            System.out.println(elem);

        }

    }

    public static Object[] getMyArray() {

        return new Object[]{"Apple", "Banana", "Cherry"};

    }

}
