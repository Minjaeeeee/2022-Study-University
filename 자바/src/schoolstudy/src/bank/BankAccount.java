package bank;

public class BankAccount 
{
	String name; //�̸�
	String PeopleNum; //�ֹι�ȣ 
	int money; //�ҷ��� ���� �� ���� ���̶�� ����
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
		System.out.println(name + "���� ���� �ݾ���: "+ AccountMoney + "�Դϴ�");
		System.out.println("===============================================");
		System.out.println("");
	}
	
	
}
