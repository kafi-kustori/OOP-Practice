
class A {

    private int ax;

    public A(int x) {

        ax = x;

    }

    public int getx() {

        return ax;

    }

    class B {

        private int bx;

        public B(int x) {

            bx = x;

        }

        public void Display(A a) {

            int cx;
            cx = a.getx() + bx;
            System.err.println("The sum is " + cx);

        }

    }

}

class topic_2 {

    public static void main(String[] args) {

        A a = new A(5);

        A.B b = a.new B(10);

        b.Display(a);

    }

}
