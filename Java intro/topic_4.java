
abstract class Test1 {

    abstract void Display();

    public void Show() {

        System.out.println("This is from non abstract method");

    }

}

class Test2 extends Test1 {

    @Override
    void Display() {

        System.out.println("This is from test2");

    }

}

class topic_4 {

    public static void main(String[] args) {

        Test2 t = new Test2();
        t.Display();
        t.Show();

    }

}
