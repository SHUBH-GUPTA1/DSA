#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Player {
private:
    int balance;
public:
    Player(int bal = 100) {
        balance = bal;
    }

    int getBalance() {
        return balance;
    }

    void setBalance(int bal) {
        balance = bal;
    }
};

class Game {
private:
    int bet;
    int guess;
    int luckyNum;
public:
    Game() {
        srand(time(NULL)); // seed the random number generator
    }

    void takeBet() {
        cout << "Enter your bet amount (0 to quit): ";
        cin >> bet;
    }

    bool isGameOver() {
        return (bet == 0);
    }

    void takeGuess() {
        cout << "Enter your guess for the lucky number (1-10): ";
        cin >> guess;
    }

    void generateLuckyNum() {
        luckyNum = rand() % 10 + 1;
    }

    void play(Player &p) {
        takeBet();
        if (isGameOver()) {
            return;
        }
        takeGuess();
        generateLuckyNum();
        cout << "The lucky number is: " << luckyNum << endl;
        if (guess == luckyNum) {
            int winnings = bet * 7;
            cout << "Congratulations! You won " << winnings << " chips!" << endl;
            p.setBalance(p.getBalance() + winnings);
        } else {
            cout << "Sorry, you lost " << bet << " chips." << endl;
            p.setBalance(p.getBalance() - bet);
        }
    }
};

int main() {
    Player player;
    Game game;
    cout << "Welcome to Lucky 7!" << endl;
    while (player.getBalance() > 0) {
        cout << "Your balance is: " << player.getBalance() << endl;
        game.play(player);
    }
    cout << "Game over. You ran out of chips." << endl;
    return 0;
}

//-----------------------------------------------------------------------------------------------------------------------------------------
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
using namespace std;

class Player {
private:
    int balance;
    string fileName;
public:
    Player(string file, int bal = 100) {
        fileName = file;
        balance = bal;
    }

    int getBalance() {
        return balance;
    }

    void setBalance(int bal) {
        balance = bal;
        ofstream ofs(fileName);
        ofs << balance << endl;
        ofs.close();
    }
};

class Game {
private:
    int bet;
    int guess;
    int luckyNum;
public:
    Game() {
        srand(time(NULL)); // seed the random number generator
    }

    void takeBet() {
        cout << "Enter your bet amount (0 to quit): ";
        cin >> bet;
    }

    bool isGameOver() {
        return (bet == 0);
    }

    void takeGuess() {
        cout << "Enter your guess for the lucky number (1-10): ";
        cin >> guess;
    }

    void generateLuckyNum() {
        luckyNum = rand() % 10 + 1;
    }

    void play(Player &p) {
        takeBet();
        if (isGameOver()) {
            return;
        }
        takeGuess();
        generateLuckyNum();
        cout << "The lucky number is: " << luckyNum << endl;
        if (guess == luckyNum) {
            int winnings = bet * 7;
            cout << "Congratulations! You won " << winnings << " chips!" << endl;
            p.setBalance(p.getBalance() + winnings);
        } else {
            cout << "Sorry, you lost " << bet << " chips." << endl;
            p.setBalance(p.getBalance() - bet);
        }
    }
};

int main() {
    string fileName = "balance.txt";
    ifstream ifs(fileName);
    int balance;
    if (ifs) {
        ifs >> balance;
        ifs.close();
    } else {
        balance = 100;
    }

    Player player(fileName, balance);
    Game game;
    cout << "Welcome to Lucky 7!" << endl;
    while (player.getBalance() > 0) {
        cout << "Your balance is: " << player.getBalance() << endl;
        game.play(player);
    }
    cout << "Game over. You ran out of chips." << endl;
    return 0;
}
