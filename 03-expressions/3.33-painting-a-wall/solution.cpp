#include <iostream>
#include <cmath>                   // Note: Needed for math functions in part (3)
#include <iomanip>                 // For setprecision
using namespace std;

int main() {
    double wallHeight;
    double wallWidth;
    double wallArea;

    cout << "Enter wall height (feet):" << endl;
    cin  >> wallHeight;

    cout << "Enter wall width (feet):" << endl;
    cin >> wallWidth;

    wallArea = wallHeight * wallWidth;
    cout << fixed << setprecision(2);                // FIXME (1): Calculate the wall's area
    cout << "Wall area: " << wallArea << " square feet" << endl;  // FIXME (1): Finish the output statement

    cout << "Paint needed: " << wallArea / 350 << " gallons" << endl;

    cout << "Cans needed: " << static_cast<int>(round(wallArea / 350)) << " can(s)" << endl;

   return 0;
}