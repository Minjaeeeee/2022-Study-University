package class7;

public class text2 
{
	public static void main(String[] args)
	{
		int[][] arr = new int[3][4];
		int num = 1;
		
		for(int i=0; i<arr.length; i++)
		{
			for(int j=0; j<arr[i].length; j++)
			{
				arr[i][j] = num;
				num++;
			}
		}
		
		for(int []a:arr)
		{
			for(int b:a)
			{
				System.out.print(b + "\t");
			}
			System.out.println();
		}
	}
}
