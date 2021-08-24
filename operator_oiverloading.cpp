#include<bits/stdc++.h>

using namespace std;

class OperatorOverloading {
    private:
        int a, b;
    public:
        OperatorOverloading(int x, int y) {
            a = x;
            b = y;
        }

    OperatorOverloading operator + (OperatorOverloading o1);
    OperatorOverloading operator * (OperatorOverloading o1);
    OperatorOverloading operator - (OperatorOverloading o1);

    bool operator == (OperatorOverloading o1);
    bool operator > (OperatorOverloading o);
    bool operator < (OperatorOverloading o);
    bool operator <= (OperatorOverloading o);
    bool operator >= (OperatorOverloading o);
    bool operator != (OperatorOverloading o);
    //members of an object should not be less than or equal 0
    bool operator && (OperatorOverloading o);
    bool operator!();

    OperatorOverloading operator -();
    void operator--(); //pre
    void operator++(); //pre

    //Notice, the int inside bracket. This int gives information to the compiler that it is the postfix version of operator.
    void operator--(int);//post
    void operator++(int);//post

    void showData();
};

OperatorOverloading OperatorOverloading::operator + (OperatorOverloading o1) {
    OperatorOverloading o(o1.a, o1.b);
    o.a = a + o.a;
    o.b = b + o.b;
    return o;
}


OperatorOverloading OperatorOverloading::operator * (OperatorOverloading o1) {
    OperatorOverloading o(o1.a, o1.b);
    o.a = a * o.a;
    o.b = b * o.b;
    return o;
}

OperatorOverloading OperatorOverloading::operator - (OperatorOverloading o1) {
    OperatorOverloading o(o1.a, o1.b);
    o.a = a - o.a;
    o.b = b - o.b;
    return o;
}

bool OperatorOverloading::operator == (OperatorOverloading o1) {
    if (o1.a == a && o1.b == b)
        return true;
    return false;
}

bool OperatorOverloading::operator > (OperatorOverloading o) {
    if (a > o.a && b > o.b)
        return true;
    return false;
}

bool OperatorOverloading::operator < (OperatorOverloading o) {
    if (a < o.a && b < o.b)
        return true;
    return false;
}

bool OperatorOverloading::operator <= (OperatorOverloading o) {
    if (a <= o.a && b <= o.b)
        return true;
    return false;
}

bool OperatorOverloading::operator >= (OperatorOverloading o) {
    if (a >= o.a && b >= o.b)
        return true;
    return false;
}

bool OperatorOverloading::operator != (OperatorOverloading o) {
    if (a != o.a && b != o.b)
        return true;
    return false;
}

//members of an object should not be less than or equal 0
bool OperatorOverloading::operator && (OperatorOverloading o) {
    if ((a >= 0 && o.a >= 0) && (b >= 0 && o.b >= 0))
        return true;
    return false;
}

bool OperatorOverloading::operator!() {
    if (a == 0 && b == 0)
        return true;
    return false;
}

OperatorOverloading OperatorOverloading::operator - () {
    OperatorOverloading o(-a, -b);
    return o;
}
void OperatorOverloading::operator--() {
    --a;
    --b;
}
void OperatorOverloading::operator--(int) {
    a--;
    b--;
}
void OperatorOverloading::operator++() {
    ++a;
    ++b;
}
//Notice, the int inside bracket. This int gives information to the compiler that it is the postfix version of operator.
void OperatorOverloading::operator++(int) {
    a++;
    b++;
}

void OperatorOverloading::showData() {
    cout << a << " " << b << endl;
}

int main() {
    OperatorOverloading o1(0, 0);
    OperatorOverloading o2(5, 4);

    OperatorOverloading o3 = o1 + o2;
    cout << "Addition" << endl;
    o3.showData();

    o3 = o1 * o2;
    cout << "Multiplication" << endl;
    o3.showData();

    o3 = o1 - o2;
    cout << "Subtraction" << endl;
    o3.showData();

    cout << "Comparison equals or not" << endl;
    if (o1 == o2)
        cout << "True";
    else
        cout << "False";

    cout << "Negates the value" << endl;
    o3 = -o1;
    o3.showData();

    cout << "Pre Decrement the value" << endl;
    --o2;
    --o2;
    o2.showData();

    cout << "Pre Increment the value" << endl;
    ++o1;
    ++o1;
    o1.showData();

    cout << "Post Decrement the value" << endl;
    o2--;
    o2--;
    o2.showData();

    cout << "Post Increment the value" << endl;
    o1++;
    o1++;
    o1.showData();

    cout << "Object one is greater or not" << endl;
    if (o1 > o2)
        cout << "True" << endl;
    else
        cout << "False" << endl;

    cout << "Object one is greater or equals or not" << endl;
    if (o1 >= o2)
        cout << "True" << endl;
    else
        cout << "False" << endl;

    return 0;
}
