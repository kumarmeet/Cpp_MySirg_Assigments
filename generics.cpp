#include <bits/stdc++.h>

using namespace std;

template <typename T>
T max(T &a, T &b)
{
  return (a > b) ? a : b;
}

template <typename T1, typename T2>
void sum(T1 a, T2 b)
{
  cout << endl
       << "Sum of a and b is -> " << (a + b) << endl;
}

template <typename T>
class Item
{
private:
  string str;
  T val;

public:
  Item(string str, T val)
  {
    this->str = str;
    this->val = val;
  }
  string getName() const
  {
    return this->str;
  }
  T getVal() const
  {
    return this->val;
  }
};

template <typename T1, typename T2>
struct My_Pair
{
  T1 first;
  T2 second;
};

int main()
{
  cout << max<int>(10, 20);
  sum<int, float>(44, 4.45);
  sum(10, 55.40); // we can write also like this

  Item<int> item1("Meet", 100);
  cout << item1.getName() << " " << item1.getVal() << endl;

  string str;
  int id;
  vector<Item<int>> v;

  v.push_back(Item<int>("Meet", 100));
  v.push_back(Item<int>("Hareet", 200));
  v.push_back(Item<int>("Sumeets", 300));

  for (auto &r : v)
    cout << r.getName() << " " << r.getVal() << endl;

  My_Pair<string, double> mypair{"Redmi", 10};

  cout << mypair.first << " " << mypair.second;
  return 0;
}
