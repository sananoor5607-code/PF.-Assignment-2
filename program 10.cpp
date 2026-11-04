#include <iostream>
using namespace std;
int main() 
{
    int speed, limit;
    cout << "Enter vehicle speed: ";
    cin >> speed;
    cout << "Enter speed limit: ";
    cin >> limit;
    if (speed > limit)
        cout << "Speed Limit Violated";
    return 0;
}