package class3;

public class BitOperator 
{

	public static void main(String[] args) 
	{
		byte n1 = 5; //00000101
		byte n2 = 3; //00000011
		byte n3 = -1; //11111111
		
		byte r1 = (byte)(n1&n2); //00000001 //둘중에 하나만 0이어도 0
		byte r2 = (byte)(n1|n2); //00000111 //n1와 n2 둘중에 하나만 1이어도 1
		byte r3 = (byte)(n1^n2); //00000110 //0 1, 1,0만 1출력 
		byte r4 = (byte)(~n3); //00000000 //아예 상반되게 값 출력
		
		System.out.println(r1);
		System.out.println(r2);
		System.out.println(r3);
		System.out.println(r4);
	}

}
