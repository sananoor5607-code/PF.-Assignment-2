#include <iostream>
using namespace std;
int main() 
{
    int balance;
    cout << "Enter current balance: ";
    cin >> balance;
    if (balance < 5000)
        cout << "Minimum Balance Alert";
    return 0;
}