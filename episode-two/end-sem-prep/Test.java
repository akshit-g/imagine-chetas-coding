public class Test {
    int n;

    Test() {

    }

    Test(int n) {
        this.n = n;
    }

    void display() {
        System.out.println("N: " + this.n);
    }

    public static void main(String[] args) {
        Test A = new Test();
        A.display();
    }
}