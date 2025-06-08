
interface Al {

    public void PrintA();

}

interface Bl {

    public void PrintB();

}

interface Cl {

    public void PrintC();

}

class A implements Al {

    @Override
    public void PrintA() {

        System.out.println("This is A");

    }
}

class B extends A implements Bl {

    @Override
    public void PrintB() {

        System.out.println("This is B");

    }
}

class C extends B implements Cl {

    @Override
    public void PrintC() {

        System.out.println("This is C");

    }

}

class topic_5 {

    public static void main(String[] args) {
        C c = new C();
        c.PrintA();
        c.PrintB();
        c.PrintC();

    }

}
