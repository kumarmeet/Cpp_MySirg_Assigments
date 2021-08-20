#include <bits/stdc++.h>

using namespace std;

class Time
{
private:
  int hour, minutes, seconds;

public:
  Time() //constructor
  {
    hour = minutes = seconds = 0;
  }

  void setTime(int h, int m, int s)
  {
    if ((h >= 0 && h <= 12) && (m >= 0 && m < 60) && (s >= 0 && s < 60))
    {
      hour = h;
      minutes = m;
      seconds = s;
    }
  }

  //getters
  int getHour()
  {
    return hour;
  }

  int getMinutes()
  {
    return minutes;
  }

  int getSeconds()
  {
    return seconds;
  }

  Time add(Time t)
  {
    //**hour, minutes and seconds variables will be caller object
    Time temp;
    temp.hour = hour + t.hour;
    temp.minutes = minutes + t.minutes;
    temp.seconds = seconds + t.seconds;
    if (temp.minutes > 59 && temp.seconds > 59)
    {
      temp.hour++;
      temp.minutes -= 60;
      temp.seconds -= 60;
    }
    else if (temp.minutes > 59)
    {
      temp.hour++;
      temp.minutes -= 60;
    }
    else if (temp.seconds > 59)
    {
      temp.minutes++;
      temp.seconds -= 60;
    }
    return temp;
  }

  Time operator+(Time t)
  {
    //**hour, minutes and seconds variables will be caller object
    Time temp;
    temp.hour = hour + t.hour;
    temp.minutes = minutes + t.minutes;
    temp.seconds = seconds + t.seconds;
    if (temp.minutes > 59 && temp.seconds > 59)
    {
      temp.hour++;
      temp.minutes -= 60;
      temp.seconds -= 60;
    }
    else if (temp.minutes > 59)
    {
      temp.hour++;
      temp.minutes -= 60;
    }
    else if (temp.seconds > 59)
    {
      temp.minutes++;
      temp.seconds -= 60;
    }
    return temp;
  }

  Time operator-(Time t)
  {
    Time temp;
    if (hour >= t.hour)
    {
      temp.hour = hour - t.hour;
      temp.minutes = minutes - t.minutes;
      temp.seconds = seconds - t.seconds;
    }
    else if (t.hour >= hour)
    {
      temp.hour = t.hour - hour;
      temp.minutes = t.minutes - minutes;
      temp.seconds = t.seconds - seconds;
    }
    //Convert into negetive to positive
    if (temp.hour < 0)
      temp.hour = -temp.hour;
    if (temp.minutes < 0)
      temp.minutes = -temp.minutes;
    if (temp.seconds < 0)
      temp.seconds = -temp.seconds;
    return temp;
  }

  Time subtraction(Time t)
  {
    Time temp;
    if (hour >= t.hour)
    {
      temp.hour = hour - t.hour;
      temp.minutes = minutes - t.minutes;
      temp.seconds = seconds - t.seconds;
    }
    else if (t.hour >= hour)
    {
      temp.hour = t.hour - hour;
      temp.minutes = t.minutes - minutes;
      temp.seconds = t.seconds - seconds;
    }
    //Convert into negetive to positive
    if (temp.hour < 0)
      temp.hour = -temp.hour;
    if (temp.minutes < 0)
      temp.minutes = -temp.minutes;
    if (temp.seconds < 0)
      temp.seconds = -temp.seconds;
    return temp;
  }

  Time timeOperations(Time t1, Time t2, char ope)
  {
    Time t3;
    switch (ope)
    {
    case '+':
      t3 = t1 + t2;
      break;
    case '-':
      t3 = t1 - t2;
      break;
    default:
      cout << "Invalid Operation" << endl;
    }
    return t3;
  }

  void showTime()
  {
    cout << getHour() << "H:" << getMinutes() << "M:" << getSeconds() << "S" << endl;
  }
};

int main()
{
  Time t1, t2, t3;
  t1.setTime(1, 1, 40);
  t2.setTime(3, 5, 21);
  cout << "Operator Overloading Style" << endl;
  //operator overloading style
  t3 = t2 + t1;
  t3.showTime();
  t3 = t1 - t2;
  t3.showTime();

  cout << "Typical function Style" << endl;
  //typical function style
  t3 = t2.add(t1);
  t3.showTime();
  t3 = t2.subtraction(t1);
  t3.showTime();

  cout << "Time Operation Funtion" << endl;
  Time t4, t5, t6;
  t4.setTime(4, 06, 12);
  t5.setTime(2, 12, 34);
  t6 = t6.timeOperations(t4, t5, '+');
  t6.showTime();
  return 0;
}
