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

  cout << "Month\tint.\tpay\t"

}
