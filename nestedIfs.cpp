#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int actualDay, actualMonth, actualYear;
    int expectedDay, expectedMonth, expectedYear;
    cin>>actualDay>>actualMonth>>actualYear>>expectedDay>>expectedMonth>>expectedYear;
    if (actualYear > expectedYear) {
      cout << 10000;
    } else if (actualYear == expectedYear) {
      if (actualMonth > expectedMonth) {
        cout << 500 * (actualMonth - expectedMonth);

      } else if (actualMonth == expectedMonth) {
        if (actualDay > expectedDay) {
          cout << 15 * (actualDay - expectedDay);

        } else {
          cout << 0;
        }
      }
      else{
          cout<<0;
      }
    } else {
      cout << 0;
    }

    return 0;
}
