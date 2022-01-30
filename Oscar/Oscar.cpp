#include <iostream>
#include <string>

using namespace std;

int main()
{
    string actor;
    double startingPoints;
    int evaluatorsNum;

    getline(cin >> ws, actor);
    cin >> startingPoints >> evaluatorsNum;

    string evaluatorsName;
    double evaluatorPoints;

    cout.setf(ios::fixed);
    cout.precision(1);

    for (size_t i = 0; i < evaluatorsNum; i++)
    {
        getline(cin >> ws, evaluatorsName);
        cin >> evaluatorPoints;

        int evaluatorNameLength = evaluatorsName.length();
        startingPoints += (evaluatorPoints * evaluatorNameLength) / 2.0;

        if (startingPoints > 1250.5) {
            cout << "Congratulations, " << actor << " got a nominee for leading role with " << startingPoints << "!" << endl;
            
            return 0;
        }
        
    }
    double diff = 1250.5 - startingPoints;
    

    cout << "Sorry, " << actor << " you need " << diff << " more!" << endl;
}