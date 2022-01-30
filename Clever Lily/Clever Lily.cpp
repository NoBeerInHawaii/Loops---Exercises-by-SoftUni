#include <iostream>

using namespace std;

int main()
{
    int age, toyPrice;
    double washingMachineP;

    cin >> age >> washingMachineP >> toyPrice;

    double money = 0;
    double birthdayMoney = 10;
    for (size_t i = 1; i <= age; i++)
    {
        if (i % 2 == 0)
        {
            money += birthdayMoney;
            birthdayMoney += 10;
            money -= 1;
        }
        else {
            money += toyPrice;
        }
    }
    
    double diff = money - washingMachineP;

    cout.setf(ios::fixed);
    cout.precision(2);
    if (diff >= 0) {
        cout << "Yes! " << diff << endl;
    }
    else {
        cout << "No! " << abs(diff) << endl;
    }
}