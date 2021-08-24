#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

class Show {
  private:
    int a;
    double b;
    char c;
    string str;

  public:
    Show operator<<(int x);
    Show operator<<(double x);
    Show operator<<(char ch);
    Show operator<<(string s);
};

Show Show:: operator<<(int x)
{
  Show s;
  s.a = x;
  printf("%d", s.a);
  return s;
}

Show Show:: operator<<(double x)
{
  Show s;
  s.b = x;
  printf("%lf", s.b);
  return s;
}

Show Show:: operator<<(string st)
{
  Show s;
  s.str = st;
  cout << s.str;
  return s;
}

int main() {
  Show show;
  show << "Meet Kumar "<<10<<" "<<1.14<<" Hello";
  return 0;
}
