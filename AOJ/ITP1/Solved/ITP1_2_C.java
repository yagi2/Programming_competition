import java.io.*;
import java.util.*;

class Main
{
    public static void main(String[] args)
    {
	Scanner sc = new Scanner(System.in);

	int a = sc.nextInt();
	int b = sc.nextInt();
	int c = sc.nextInt();
	int tmp;

	if (a > b) {
	    tmp = a;
	    a = b;
	    b = tmp;
	}
	if (a > c) {
	    tmp = a;
	    a = c;
	    c = tmp;
	}
	if (b > c) {
	    tmp = b;
	    b = c;
	    c = tmp;
	}

	System.out.println(a + " " + b + " " + c);
    }
}