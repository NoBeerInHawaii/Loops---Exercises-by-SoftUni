#include <iostream>
#include <climits>
using namespace std;

int main()
{
	int n; cin >> n;

	int sum = 0;
	int biggestNum = INT_MIN;

	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;

		sum += num;

		if (num > biggestNum) {
			biggestNum = num;
		}
	}
	sum -= biggestNum;
	int diff = abs(sum - biggestNum);
	if (sum == biggestNum) {
		cout << "Yes" << endl;
		cout << "Sum = " << sum << endl;
	}
	else {
		cout << "No" << endl;
		cout << "Diff = " << diff << endl;
	}

}