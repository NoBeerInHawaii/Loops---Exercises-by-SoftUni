#include <iostream>

using namespace std;

int main()
{
    int groupsCount; cin >> groupsCount;

	int allClimbers = 0;
	int GroupClimbers;

	int musalaClimbers = 0;
	int montblanClimbers = 0;
	int kilimanjaroClimbers = 0;
	int k2Climbers = 0;
	int everestClimbers = 0;

	cout.setf(ios::fixed);
	cout.precision(2);

	for (int i = 0; i < groupsCount; i++)
	{
		cin >> GroupClimbers;

		allClimbers += GroupClimbers;

		if (GroupClimbers <= 5)
		{
			musalaClimbers += GroupClimbers;
		}
		else if (GroupClimbers >= 6 && GroupClimbers <= 12)
		{
			montblanClimbers += GroupClimbers;
		}
		else if (GroupClimbers >= 13 && GroupClimbers <= 25)
		{
			kilimanjaroClimbers += GroupClimbers;
		}
		else if (GroupClimbers >= 26 && GroupClimbers <= 40)
		{
			k2Climbers += GroupClimbers;
		}
		else {
			everestClimbers += GroupClimbers;

		}
	}
	double musalaPercentage = (double)musalaClimbers / allClimbers * 100.0;
	double montblanPercentage = (double)montblanClimbers / allClimbers * 100.0;
	double kilimanjaroPercentage = (double)kilimanjaroClimbers / allClimbers * 100.0;
	double k2Percentage = (double)k2Climbers / allClimbers * 100.0;
	double everestPercentage = (double)everestClimbers / allClimbers * 100.0;

	cout << musalaPercentage << "%" << endl;
	cout << montblanPercentage << "%" << endl;
	cout << kilimanjaroPercentage << "%" << endl;
	cout << k2Percentage << "%" << endl;
	cout << everestPercentage << "%" << endl;
}