import java.io.*;
import java.util.*;

class Main
{
    public static void main(String[] args)
    {
	Scanner sc = new Scanner(System.in);

	int W = sc.nextInt();
	int H = sc.nextInt();
	int x = sc.nextInt();
	int y = sc.nextInt();
	int r = sc.nextInt();

	if (x >= r && x <= W-r && y >= r && y <= H-r) {
	    System.out.println("Yes");
	}
	else {
	    System.out.println("No");
	}
    }
}