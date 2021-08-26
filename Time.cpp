#include <bits/stdc++.h>

using namespace std;

class NextTime; //forward declaration for compiler

class Time
{
private:
  int hour, minute, second;
  void normalize()
  {
    minute += second / 60;
    second %= 60;
    hour += minute / 60;
    minute %= 60;
  }

public:
  Time()
  {
    hour = minute = second = 0;
  }

  Time(int h, int m, int s)
  {
    if ((h >= 0 && h <= 60) && (m >= 0 && m <= 60) && (s >= 0 && s <= 60))
    {
      hour = h;
      minute = m;
      second = s;
    }
    else
      cout << "Invalid time entered!!!" << endl;
  }

  Time operator+(Time t)
  {
    Time r;
    r.hour = t.hour + hour;
    r.minute = t.minute + minute;
    r.second = t.second + second;
    r.normalize();
    return r;
  }

  bool operator>(Time t)
  {
    if (hour > t.hour)
      return true;
    else if (hour < t.hour)
      return false;
    else if (minute > t.minute)
      return true;
    else if (minute < t.minute)
      return false;
    else if (second > t.second)
      return true;
    else
      return false;
  }

  Time operator++() //pre increment
  {
    Time t;
    t.hour = hour;
    t.minute = minute;
    t.second = ++second;
    t.normalize();
    return t;
  }

  Time operator++(int) //post increment
  {
    Time t;
    t.hour = hour;
    t.minute = minute;
    t.second = second++;
    t.normalize();
    return t;
  }

  Time operator+(int sec)
  {
    Time r;
    r.hour = hour;
    r.minute = minute;
    r.second = second + sec;
    r.normalize();
    return r;
  }

  void display()
  {
    normalize();
    cout << hour << ":" << minute << ":" << second << endl;
  }

  friend Time operator+(Time r, Time t);
  friend Time operator+(int sec, Time t);
  friend Time operator+(Time t, NextTime nt); //** due to forward declaration of NextTime tells the compiler about NextTime
};

class NextTime
{
private:
  int hour, minute, second;

public:
  NextTime(int h, int m, int s)
  {
    hour = h;
    minute = m;
    second = s;
  }
  friend Time operator+(Time t, NextTime nt);
};

Time operator+(Time r, Time t) //operator overloading with friend function
{
  Time temp;
  temp.hour = r.hour + t.hour;
  temp.minute = r.minute + t.minute;
  temp.second = r.second + t.second;
  temp.normalize();
  return temp;
}

Time operator+(int sec, Time t)
{
  Time r;
  r.hour = t.hour;
  r.minute = t.minute;
  r.second = t.second + sec;
  r.normalize();
  return r;
}

Time operator+(Time t, NextTime nt)
{
  Time r;
  r.hour = t.hour + nt.hour;
  r.minute = t.minute + nt.minute;
  r.second = t.second + nt.second;
  r.normalize();
  return r;
}

int main()
{
  Time t1(4, 12, 55), t2(2, 40, 59), t3;

  if (t1 > t2)
    t3 = operator+(t1, t2); //friend function calls
  t3 = t1.operator+(t2);    // member function style calls

  t3.display();

  t3 = ++t1;
  t3.display();
  t1.display();

  t3 = t2++;
  t3 = t2++;
  t3.display();
  t2.display();

  t3 = t1 + 20; //this is possible using member funtion
  t3.display();

  t3 = 14 + t2; //this is possible using friend function
  t3.display();

  NextTime nt(1, 12, 34);

  t3 = t1 + nt; //**adding two different class object using friend function
  t3.display();

  return 0;
}
