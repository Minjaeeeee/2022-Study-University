package class5;

public class Circle 
{
	private double rad = 0; //반지름
	final double PI = 3.14; //원주율 (변하지 않는 값)
	
	public Circle(double r)
	{
		setRad(r);
	}
	
	public void setRad(double r)
	{
		if(r<0)
		{
			rad = 0 ;
			return;
		}
		
		rad = r;
	}
	
	
	public double getRad()
	{
		return rad;
	}
	
	public double getArea()
	{
		return PI;
	}
}
