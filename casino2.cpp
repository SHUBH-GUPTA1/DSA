#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Player {
private:
    int balance;
public:
    Player() {
        balance = 1000;
    }
    int getBalance() const {
        return balance;
    }
    void addBalance(int amount) {
        balance += amount;
    }
    void subtractBalance(int amount) {
        balance -= amount;
    }
};

class Dice {
public:
    int roll() {
        srand(time(0)); // seed the random number generator
        return rand() % 6 + 1; // generate a random number between 1 and 6
    }
};

class CasinoGame {
private:
    Player player;
    Dice dice;
    int betAmount;
public:
    CasinoGame() {
        betAmount = 0;
    }
    void placeBet() {
        cout << "Your current balance is $" << player.getBalance() << endl;
        cout << "Enter the amount you want to bet: $";
        cin >> betAmount;
        if (betAmount > player.getBalance()) {
            cout << "You don't have enough balance to make this bet." << endl;
            betAmount = 0;
        }
        else {
            player.subtractBalance(betAmount);
        }
    }
    void play() {
        placeBet();
        cout << "Press enter to roll the dice...";
        cin.ignore();
        cin.get();
        int diceRoll = dice.roll();
        cout << "You rolled a " << diceRoll << "." << endl;
        if (diceRoll >= 4) {
            int winnings = betAmount * 2;
            player.addBalance(winnings);
            cout << "Congratulations, you won $" << winnings << "!" << endl;
        }
        else {
            cout << "Sorry, you lost." << endl;
        }
        betAmount = 0;
        cout << "Your new balance is $" << player.getBalance() << "." << endl;
    }
};

int main() {
    CasinoGame game;
    char playAgain;
    do {
        game.play();
        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y');
    cout << "Thanks for playing!" << endl;
    return 0;
}
