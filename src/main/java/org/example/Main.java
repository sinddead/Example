package org.example;
import java.util.Scanner;

class MathOperations {
    public static int add(int x, int y) {
        return x + y;
    }

    public static int subtract(int x, int y) {
        return x - y;
    }

    public static int multiply(int x, int y) {
        return x * y;
    }

    public static double divide(int x, int y) {
        return ((double) x / y);
    }
    public static int findMax(int a, int b){
        if (a>b) return a;
        return b;
    }
    public static int squareArea(int side) {
        return side*side;
    }
    public static int squarePerimeter(int side) {
        return side*4;
    }
    public static double findHypotenuse(double a, double b) {
        return Math.sqrt(a*a + b*b);
    }
    public static double calculatePercentage(double part, double total) {
        return part/total * 100;
    }
}
class BankAccount {
    private String owner_;
    private double balance_;

    public BankAccount(String owner, double balance) {
        owner_ = owner;
        balance_ = balance;
    }

    public String getOwner_(){
        return owner_;
    }
    public double getBalance_(){
        return balance_;
    }

    public void deposit(double amount){
        if (amount <=0) System.out.println("Deposit can't be negative!");
        else balance_+=amount;
    }
    public void withdraw(double amount){
        if (amount <=0) System.out.println("Withdraw can't be negative!");
        else if (amount>balance_) System.out.println("Withdraw can't be more than balance!");
        else balance_-=amount;
    }
    public boolean is_Rich(){
        return balance_>100000;
    }

}
public class Main{
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.println("Print x:");
        int x_ = scan.nextInt();
        System.out.println("Print y:");
        int y_ = scan.nextInt();
        MathOperations mo = new MathOperations();
        System.out.println(mo.add(x_,y_));
        System.out.println(mo.subtract(x_,y_));
        System.out.println(mo.multiply(x_,y_));
        System.out.println(mo.divide(x_,y_));
        System.out.println(mo.findMax(7,8));
        System.out.println(mo.findMax(9,4));
        System.out.println(mo.squareArea(3));
        System.out.println(mo.squarePerimeter(3));
        System.out.println(mo.findHypotenuse(3, 4));
        System.out.println(mo.calculatePercentage(35, 200));


        System.out.println("\nTask 2\n");
        BankAccount ba1 = new BankAccount("Valeriy", 50000);
        ba1.deposit(50000);
        ba1.withdraw(-2);
        System.out.println("Owner: "+ba1.getOwner_()+" Balance: "+ba1.getBalance_()+" Rich: "+ba1.is_Rich());
        BankAccount ba2 = new BankAccount("Barmaley", 7777777);
        ba2.deposit(777);
        ba2.deposit(-1);
        ba2.withdraw(7777);
        System.out.println("Owner: "+ba2.getOwner_()+" Balance: "+ba2.getBalance_()+" Rich: "+ba2.is_Rich());
    }
}
