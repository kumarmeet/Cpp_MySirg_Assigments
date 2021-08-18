#include <bits/stdc++.h>
using namespace std;

class Test
{
private:
    int a, b;

public:
    Test()
    {
        a = 0;
        b = 0;
        cout << "Default Constructor" << endl;
    }
    Test(int x)
    {
        a = x;
        b = 0;
        cout << "One argument Constructor" << endl;
    }
    Test(int x, int y)
    {
        a = x;
        b = y;
        cout << "Two argument Constructor" << endl;
    }

    Test(Test &T) //implicit copy constructor
    {
        a = T.a;
        b = T.b;
    }

    void display()
    {
        cout << "a -> " << a << ", b -> " << b << endl;
    }

    ~Test() //destructor
    {
        cout << "Object destroyed" << endl;
    }
};

int main()
{
    Test t1, t2(4), t3(6, 7);

    t1.display();
    t2.display();
    t3.display();

    Test t4(t3); // t4 = t3

    cout << "T4 -> ";
    t4.display();
    return 0;
}
