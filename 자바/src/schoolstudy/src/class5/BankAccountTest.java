package class5;

public class BankAccountTest 
{
	public static void main(String[] args)
	{
		BankAccount Kim = new BankAccount("±ËπŒ¿Á","000729"); 
		BankAccount Lee = new BankAccount("¿Âµ∂¥Î", "000123");
		
		Kim.Deposite(100000);
		Lee.Deposite(16000);
		
		Kim.Withdraw(15800);
		Lee.Withdraw(10000);
		
		Kim.ShowInformation();
		Lee.ShowInformation();
	}
}
