
class A {

    int x;

    public A() {

        x = 0;

    }

    public A(int x) {

        this.x = x;

    }

    public int getx() {

        return (x + 10);

    }

}

class B extends A {

    int x = 20;

    public int getx() {

        return (x + 10);

    }

    public B(int x) {

        super(x);

    }

    public int getAX() {

        return super.getx();

    }

    public int getAXValue() {

        return super.x;

    }

}

public class topic_3 {

    public static void main(String[] args) {

        B b = new B(5);
        System.out.println("x of class A in class B :" + b.getAXValue());
        System.out.println("getx() of class A in class B " + b.getAX());
        System.out.println("getx() of class B " + b.getx());

    }
}
