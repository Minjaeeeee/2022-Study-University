package class7;
import java.util.Scanner;

//숫자를 입력받는 코드를 말하는 겁니다.
public class test1 
{
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		
		System.out.print("첫번째 숫자?");
		int num1 = sc.nextInt();
		
		System.out.print("두번째 숫자?");
		int num2 = sc.nextInt();
		
		System.out.print("세번째 숫자?");
		int num3 = sc.nextInt();
		
		int sum = num1+num2+num3;
		System.out.println(sum);
	}
}
