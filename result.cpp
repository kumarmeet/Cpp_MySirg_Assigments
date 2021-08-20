#include <bits/stdc++.h>

using namespace std;

class Result
{
  //by default private if private access specifier not specified
  int result, totalAttempt, netRight, netWrong, marksForRight, marksForWrong;

public:
  Result()
  {
    result = totalAttempt = netRight = netWrong = marksForRight = marksForWrong = 0;
  }
  void setResult(int res, int att, int rig, int wro, int mrkrt = 0, int mrkwr = 0) //default argument set for last two parameters
  {
    result = res;
    totalAttempt = att;
    netRight = rig;
    netWrong = wro;
    marksForRight = mrkrt;
    marksForWrong = mrkwr;
  }
  void showResult()
  {
    cout << "Total attempt -> " << totalAttempt << endl;
    cout << "Net right -> " << netRight << endl;
    cout << "Net wrong -> " << netWrong << endl;
    cout << "Marks obtained for right -> " << marksForRight << endl;
    cout << "Marks obtained for wrong -> " << marksForWrong << endl;
  }
};

int main()
{
  Result english;
  cout << "English result" << endl;
  english.setResult(100, 80, 60, 20);
  english.showResult();

  Result maths;
  cout << "Maths result" << endl;
  maths.setResult(100, 90, 88, 2, 90, 10);
  maths.showResult();

  return 0;
}
