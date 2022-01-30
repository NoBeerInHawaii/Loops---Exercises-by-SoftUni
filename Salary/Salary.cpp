#include <iostream>
#include <string>
using namespace std;

int main()
{
	int openedTabs;
	int salary;
	cin >> openedTabs >> salary;

	string tabName;

	for (int i = 0; i < openedTabs; i++)
	{
		cin >> tabName;
		if (tabName == "Facebook") {
			salary -= 150;
		}
		else if (tabName == "Instagram") {
			salary -= 100;
		}
		else if (tabName == "Reddit") {
			salary -= 50;
		}

		if (salary <= 0) {
			cout << "You have lost your salary." << endl;
			
			return 0;
		}
	}
	cout << salary << endl;
}