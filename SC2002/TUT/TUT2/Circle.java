package SC2002.TUT.TUT2;

public class Circle {
    private double radius;
    private static final double PI = 3.14159;
    public Circle(double rad) {this.radius = rad;}

    public void setRadius(double rad) {this.radius = rad;}
    public double getRadius() {return this.radius;}

    public double area() {return PI*radius*radius;}
    public double circumference() {return 2*PI*radius;}

    public static void main(String[] args) {
        Circle c = new Circle(4);
        System.err.println(c.area());
        System.err.println(c.circumference());
    }
}