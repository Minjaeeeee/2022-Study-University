package class7;
import java.util.Scanner;

//���ڸ� �Է¹޴� �ڵ带 ���ϴ� �̴ϴ�.
public class test1 
{
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		
		System.out.print("ù��° ����?");
		int num1 = sc.nextInt();
		
		System.out.print("�ι�° ����?");
		int num2 = sc.nextInt();
		
		System.out.print("����° ����?");
		int num3 = sc.nextInt();
		
		int sum = num1+num2+num3;
		System.out.println(sum);
	}
}
