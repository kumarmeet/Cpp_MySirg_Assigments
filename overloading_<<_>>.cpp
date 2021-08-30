#include<bits/stdc++.h>
using namespace std;

class Test
{
  private:
    int a;
    public:
    Test()
    {
      this->a = 0;
    }
    friend ostream& operator<<(ostream &, Test &);
    friend istream& operator>>(istream &, Test &);
};

istream& operator>>(istream &i, Test &t)
{
  i >> t.a;
  return i;
}

ostream& operator<<(ostream &o, Test &t)
{
  o << t.a;
  return o;
}

int main(){
  Test t, r;
  cin >> t >> r;
  cout << t << r;
  return 0;
}

