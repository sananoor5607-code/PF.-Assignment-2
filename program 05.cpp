#include <iostream>
using namespace std;
int main() 
{
    float temperature;
    cout << "Enter temperature in Celsius: ";
    cin >> temperature;
    if (temperature >= 39)
        cout << "High Fever Alert: Seek Medical Assessment";
    return 0;
}