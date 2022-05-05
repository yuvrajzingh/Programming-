/* Design a class to represent bank account details as base class and bank process as subclass. 
Then create bank process class which is the subclass of bank account class which contains amount 
as instance variables and methods are deposit() and withdraw() and then return balance.*/




import java.util.*;



class BankAcc {
	String name;
	int accNo;
	String accType;
	double balance;

	void getDetails() {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter the name: ");
		name = sc.nextLine();
		System.out.print("Enter the account number: ");
		accNo = sc.nextInt();
		System.out.print("Enter the account type: ");
		accType = sc.next();
		System.out.print("Enter the balance: ");
		balance = sc.nextDouble();
        
	}

	void printDetails() {
		System.out.println("Name: " + name);
		System.out.println("Account Number: " + accNo);
		System.out.println("Account Type: " + accType);
		System.out.println("Balance: " + balance);
	}
}

class BankProcess extends BankAcc {
	double amount;

	void deposit() {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter the amount to be deposited: ");
		amount = sc.nextDouble();
		balance += amount;
        
	}

	void withdraw() {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter the amount to be withdrawn: ");
		amount = sc.nextDouble();
		balance -= amount;
        
	}

	void returnBalance() {
		System.out.println("Balance: " + balance);
	}
}

public class BankAccount {
	public static void main(String[] args) {
		BankProcess p1 = new BankProcess();
		p1.getDetails();
		p1.printDetails();
		p1.deposit();
		p1.withdraw();
		p1.returnBalance();
	}
}