#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  double balance;
  double payment;
  double apr;

  cout << "Enter balance";
  cin >> balance;

  cout << "Enter payment";
  cin >> payment;

  cout << "Enter apr";
  cin >> apr;

  cout << fixed << setprecision(2);

  double monthlyrate = apr / 100 / 12;
  int month = 0;

  cout << "month\tint.\tpay\tbalance" << endl;
  cout << month <<"\t\t\t" << balance << endl;

  while (balance > 0){
    month++;

    double interest = balance * monthlyrate;
    balance = balance + interest;

    double actualpayment;

    if (payment > balance)
  }

}
