#include <iostream>
#include <string>
using namespace std;

int main()
{
    int allTournaments, startingPoints;
    cin >> allTournaments >> startingPoints;

    string rank;
    
    int allTournamentPoints = 0;
    int winTournaments = 0;
    for (int i = 0; i < allTournaments; i++)
    {
        cin >> rank;

        if (rank == "W") {
            startingPoints += 2000;
            allTournamentPoints += 2000;
            winTournaments++;
        }
        else if (rank == "F") {
            startingPoints += 1200;
            allTournamentPoints += 1200;
        }
        else if (rank == "SF") {
            startingPoints += 720;
            allTournamentPoints += 720;
        }
    }
    int averagePoints = (double)allTournamentPoints / allTournaments;
    double winPercentage = (double)winTournaments / allTournaments * 100.0;
    cout << "Final points: " << startingPoints << endl;
    cout << "Average points: " << averagePoints << endl;
    
    cout.setf(ios::fixed);
    cout.precision(2);
    
    cout << winPercentage << "%" << endl;
}