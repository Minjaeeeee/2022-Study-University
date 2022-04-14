package class6;

public class test2 {

	public static void main(String[] args) 
	{
		StringBuilder num1 = new StringBuilder("990925-1012999");
		num1.replace(6, 7, " "); //6-7은 6번째를 대체하는 것
		num1.toString();
		System.out.println(num1);
	}
	
	

}
