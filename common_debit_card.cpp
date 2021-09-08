#include<bits/stdc++.h>

using namespace std;

class AccountXYZ; //forward declaration
class AccountPQR; //forward declaration

void withdraw(int, AccountXYZ &);
void withdraw(int, AccountPQR &);

class CommonCard {
public:
    void debit(int amt, AccountXYZ &xyz) {
        withdraw(amt,xyz);
    }

    void debit(int amt, AccountPQR &pqr) {
        withdraw(amt,pqr);
    }
};

class AccountXYZ {
private:
    int bal;
public:
    AccountXYZ(int bal) {
        this->bal = bal;
    }

    void display() {
        cout<<this->bal<<endl;
    }

    friend void withdraw(int amt, AccountXYZ &xyz);
};

void withdraw(int amt, AccountXYZ &xyz) {
    xyz.bal -= amt;
}

class AccountPQR {
private:
    int bal;
public:
    AccountPQR(int bal) {
        this->bal = bal;
    }

    void display() {
        cout<<this->bal<<endl;
    }

    friend void withdraw(int amt, AccountPQR &pqr);
};

void withdraw(int amt, AccountPQR &pqr) {
    pqr.bal -= amt;
}
