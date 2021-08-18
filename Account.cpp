#include <bits/stdc++.h>

using namespace std;

class Account
{
private:
    int accountNo;
    static double rateOfInterest;
    double balance;

public:
    Account(int acc, double bal)
    {
        accountNo = acc;
        balance = bal;
    }

    //setters
    void setBalance(double bal)
    {
        balance = bal;
    }

    static void setRateOfInterest(double roi)
    {
        rateOfInterest = roi;
    }

    //getters
    double getBalance()
    {
        return balance;
    }

    int getAccount()
    {
        return accountNo;
    }

    static double getRateOfInterest()
    {
        return rateOfInterest;
    }

    void depositAmount(double rupee)
    {
        if (rupee > 0)
            balance += rupee;
        else
            cout << "Entered amount must be in positive" << endl;
    }

    void withdrawlAmount(double rupee)
    {
        if (rupee > 0 && rupee <= getBalance())
            balance -= rupee;
        else if (rupee > getBalance())
            cout << "You account has insufficient amount" << endl;
        else
            cout << "Entered amount must be in positive" << endl;
    }

    void displayAccountInformation()
    {
        cout << "Account Number -> " << getAccount() << endl;
        cout << "Bank Balance -> " << getBalance() << endl;
    }
};

double Account::rateOfInterest; //memory allocation for static

int main()
{
    Account abhi(524122, 0.00);
    Account::setRateOfInterest(6.73);
    abhi.depositAmount(500);
    abhi.depositAmount(12000);

    abhi.displayAccountInformation();
    return 0;
}
