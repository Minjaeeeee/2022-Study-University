package bank;

public class BankAccount 
{
	String name; //이름
	String PeopleNum; //주민번호 
	int money; //불러온 돈의 양 저금 양이라고 하자
	int AccountMoney=0;
	
	public BankAccount(String name, String PeopleNum)
	{
		this.PeopleNum = PeopleNum;
		this.name = name;
	}
	
	public void Deposite(int money)
	{
		AccountMoney +=money;
	}
	
	public void Withdraw(int money)
	{
		AccountMoney -= money;
	}
	
	public void ShowInformation()
	{
		System.out.println("===============================================");
		System.out.println(name + "님의 현재 금액은: "+ AccountMoney + "입니다");
		System.out.println("===============================================");
		System.out.println("");
	}
	
	
}
