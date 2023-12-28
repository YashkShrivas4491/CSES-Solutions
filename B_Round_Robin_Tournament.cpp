#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct Player {
    int number;
    int wins;
};

/**
 * The function compares two players based on their number of wins and player number.
 * 
 * @param p1 The parameter p1 is a reference to a constant Player object.
 * @param p2 The above code defines a function named "comparePlayers" that takes two parameters of type
 * "Player" by reference, named "p1" and "p2".
 * 
 * @return a boolean value.
 */
bool comparePlayers(const Player& p1, const Player& p2) {
    if (p1.wins != p2.wins)
        return p1.wins > p2.wins;
    return p1.number < p2.number;
}

int main() {
    int N;
    cin >> N;
    
    vector<string> results(N);
    vector<Player> players(N);

    for (int i = 0; i < N; ++i) {
        cin >> results[i];
        /* In the given code, `players[i].number = i + 1;` is assigning a unique number to each player. */
        players[i].number = i + 1;
       /* In the given code, `players[i].wins = 0;` is initializing the number of wins for each player
       to 0. This is done before counting the actual wins for each player based on the results. */
        players[i].wins = 0;
    }

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (results[i][j] == 'o') {
                players[i].wins++;
            }
        }
    }

    sort(players.begin(), players.end(), comparePlayers);

    for (int i = 0; i < N; ++i) {
        cout << players[i].number << " ";
    }

    return 0;
}
