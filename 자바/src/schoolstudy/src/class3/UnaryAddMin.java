package class3;

public class UnaryAddMin {

	public static void main(String[] args) 
	{	
		short num1 = 5;
		System.out.println(-num1);
		
		short num2 = 7;
		short num3 = (short)num2; //형변환 하지 않으면 오류가 발생한다
		short num4 = (short)(-num2); //형변환 하지 않으면 오류가 발생한다. 컴파일러는 int형이기 떄문에 바뀜!
		
		System.out.println(num3); 
		System.out.println(num4);
	}

}
