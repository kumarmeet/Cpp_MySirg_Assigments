#include <bits/stdc++.h>

using namespace std;

class Area
{
private:
  static const double PI;
  double area;

public:
  Area()
  {
    area = 1.0;
  }

  void findArea(double radius) //function overloading
  {
    if (radius >= 0)
      area = (PI * radius * radius);
    else
      cout << "Radius can't be negative" << endl;
  }

  void findArea(double length, double breadth) //function overloading
  {
    if (length >= 0 && breadth >= 0)
      area = (length * breadth);
    else
      cout << "Length or breadth can't be negative" << endl;
  }

  void display()
  {
    cout << "Area is -> " << area << endl;
  }
};

const double Area::PI = 3.142857; //* allocated memory static member variable

class Operations
{
private:
  double num1, num2, result;

public:
  Operations()
  {
    num1 = num2 = result = 0.0;
  }

  //*overloaded funtions
  void sum(int a, int b)
  {
    num1 = a;
    num2 = b;
    (result) = (int)(num1 + num2);
  }

  void sum(double a, double b)
  {
    num1 = a;
    num2 = b;
    result = (num1 + num2);
  }

  string sum(string a, string b)
  {
    return (a + b);
  }

  void display()
  {
    cout << num1 << " + " << num2 << " is " << result << endl;
  }
};

int main()
{
  Area circle;
  circle.findArea(5.3);
  circle.display();

  Area rectangle;
  rectangle.findArea(44.3, 12.44);
  rectangle.display();

  Operations a1;
  a1.sum(5, 6);
  a1.display();

  Operations a2;
  a1.sum(4.4, 8.7);
  a1.display();

  Operations a3;
  string str = a1.sum("Meet ", "Kumar");
  cout << str;
  return 0;
}
