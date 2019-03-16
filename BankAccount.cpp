#include<iostream>
#include<string>

using namespace std;

class bankAccount
{
private:
	static int num;
	string firstNmae, lastName;
	string accountType;
	int    accountNumber;
	double balance;
	double interestRate;

public:
	void setdata(void)         // Function to set the data 
	{
		cout << "Enter customer's first and last name: "; // the user will enter the first and last name 
		cin >> firstNmae >> lastName;
		cout << "Enter account type (checking/savings): ";
		cin >> accountType;
		cout << "Enter account number: ";
		cin >> accountNumber;
		cout << "Enter account balance: ";
		cin >> balance;
		cout << "Enter interest rate: ";
		cin >> interestRate;
	}
	void deposit(void)     // function for deposit amount by user
	{
		double n;
		cout << "Enter amount to deposit: ";
		cin >> n;
		cout << "Total balance after deposit is: " << balance + n;
		balance = balance + n;
	}
	void withdraw(void)    // withdraw Function
	{
		double w;
		cout << "Enter amount to withdraw: ";
		cin >> w;
		cout << "Balance after withdraw is: " << balance - w << endl;
		balance = balance - w;
	}
	void updateBalance()
	{
		cout << "Your balance is: " << balance << endl;
	}
	void print(void)           // Function to let the user enter the data of bank account
	{
		cout << "Name: " << firstNmae << " " << lastName << endl;
		cout << "Balance : " << balance << endl;
		cout << "Account number: " << accountNumber << endl;
		cout << "Account type: " << accountType << endl;
		cout << "Intrest rate: " << interestRate << endl;


	}
};
int main(void)
{
	bankAccount b;

	int choice;

	for (int k = 0; k < 10; k++)
	{
		cout << "\n  1: Enter 1 to add a new customer.\n";
		cout << "  2: Enter 2 for deposit amount\n";
		cout << "  3: Enter 3 to withdraw amount \n";
		cout << "  4: Enter 4 to display data\n";
		cout << "  9: Enter 9 to exit the program\n";
		cin >> choice;
		switch (choice)       // divide the Functions into 4 cases so the user will have the option to pick the service want
		{
		case 1: b.setdata();
			break;
		case 2: b.deposit();
			break;
		case 3: b.withdraw();
			break;
		case 4:b.print();
			break;
		case 9: exit(0);
			break;
		default:
			cout << "wrong choice";
			break;


		}

	}
	system("pause");  // to stop the screen so the user will be able to read the data entered and read the result
	return 0;
}
