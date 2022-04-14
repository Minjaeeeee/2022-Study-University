package class2;

class IntergerLiterals //default 클래스이다 
{
	public static void main(String[] args)
	{
		int num1 = 123; //10진수 표현
		int num2 = 0123; //8진수 표현
		int num3 = 0x123; //16진수 표현
		
		System.out.println("num1: " + num1);
		System.out.println("num2: " + num2);
		System.out.println("num3: " + num3);
		
		System.out.println("11 + 22 + 23 = "+ (11+22+33));
		System.out.println("011 + 022 + 033 = "+ (011+022+033));
		System.out.println("0x11 + 0x22 + 0x33 = "+ (0x11 + 0x22 + 0x33));
		
		System.out.println(3147483647L + 3147483647L); //L 또는 l 을 붙여서 long형 상수로 표현해 달라는 요청을 해야함
	}
}
