#include <iostream>

class Account
{
public:

	void Bezahlen(const double& Betrag);
	void Einzahlung(const double& Betrag);

private:

	double Kontostand(void);

};


void Account::Bezahlen(const double& Betrag)
{	

	int tax = 300;
	int electricity = 1200;
	int total_money = tax + electricity;
	std::cout << total_money;
}

void Account::Einzahlung(const double& Betrag)
{
	int Deposit = 3400;
	std::cout << Deposit;
}

double Account::Kontostand(void)
{
	int Betrag;
	int Deposit = 3400;
	int tax = 300;
	int electricity = 1200;
	int total_money = tax + electricity;
	Betrag = Deposit - total_money;
	std::cout << Betrag;
	return 0.0;
}


