#include <iostream>
using namespace std;

int main() {
   int currentPrice, lastMonthsPrice;

   cin >> currentPrice >> lastMonthsPrice;
   if (currentPrice > lastMonthsPrice) {
      cout << "This house is $" << currentPrice << ". The change is -$" << (lastMonthsPrice - currentPrice) * (-1) << " since last month." << endl;
   }
   else
   cout << "This house is $" << currentPrice << ". The change is -$" << lastMonthsPrice - currentPrice << " since last month." << endl;

   cout << "The estimated monthly mortgage is $" << (currentPrice * 0.051) / 12 << "." << endl;

   return 0;
}
