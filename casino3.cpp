#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class CasinoGame {
private:
    int balance;

public:
    CasinoGame(int initialBalance) {
        balance = initialBalance;
    }

    void playGame() {
        int betAmount;
        cout << "Enter your bet amount: ";
        cin >> betAmount;

        if (betAmount > balance) {
            cout << "You don't have enough balance to make this bet!" << endl;
            return;
        }

        srand(time(NULL));
        int randomNumber = rand() % 2;
        bool win = (randomNumber == 0);

        if (win) {
            balance += betAmount;
            cout << "Congratulations! You won $" << betAmount << "!" << endl;
        } else {
            balance -= betAmount;
            cout << "Sorry, you lost $" << betAmount << "." << endl;
        }

        cout << "Your current balance is $" << balance << "." << endl;
    }
};

int main() {
    int initialBalance;
    cout << "Enter your initial balance: ";
    cin >> initialBalance;

    CasinoGame game(initialBalance);

    while (true) {
        game.playGame();

        cout << "Do you want to play again? (y/n): ";
        char playAgain;
        cin >> playAgain;

        if (playAgain == 'n') {
            break;
        }
    }

    cout << "Thank you for playing!" << endl;

    return 0;
}
