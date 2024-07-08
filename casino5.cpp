#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <stdlib.h>

using namespace std;

class SlotMachine {
private:
    int balance;

public:
    int amount;
    int guess;
    int dice;
    string playerName;
    int bettingAmount;

    SlotMachine(int initialbalance, string pname) {
        balance = initialbalance;
        playerName = pname;
    }

    void spin() {
        

        do {
            // Get player's betting amount
            cout <<playerName<<", enter money to bet : $";
            cin >> bettingAmount;
            if (bettingAmount > balance)
                cout << "Your betting amount is more than your current balance\n"
                << "\nRe-enter data\n ";
        } while (bettingAmount > balance);

        // Get player's numbers
        do {
            cout << "Guess your number to bet between 1 to 10: ";
            cin >> guess;
            if (guess <= 0 || guess > 10)
                cout << "Please check the number! Should be between 1 to 10\n"
                << "\nRe-enter data\n ";
        } while (guess <= 0 || guess > 10);

        dice = rand() % 10 + 1; // Will hold the randomly generated integer between 1 and 10

        if (dice == guess) {
            cout << "\n\nGood Luck! You won Rs." << bettingAmount * 10;
            balance = balance + bettingAmount * 10;
        }
        else {
            cout << "Bad Luck this time! You lost $ " << bettingAmount << "\n";
            balance = balance - bettingAmount;
        }

        cout << "\nThe winning number was: " << dice << "\n";
        cout << "\n" << playerName << ", you have $ " << balance << "\n";

        ofstream outputFile;
        outputFile.open("results.txt", ios::app);

        if (outputFile.is_open()) {
            outputFile << playerName << "," << balance << "\n";            
        }

        outputFile.close();

        if (balance == 0) {
            cout << "You have no money to play";
            exit(0);
        }
    }

    void rules() {
    cout << "\n\n";
    cout << "\t\tRULES OF THE GAME\n";
    cout << "\t1. Choose any number between 1 to 10\n";
    cout << "\t2. If you win you will get 10 times of money you bet\n";
    cout << "\t3. If you bet on wrong number you will lose your betting amount\n\n";
    }
};

int main() {
    int amount;
    string playerName;
    cout << "\n===============================================================================================";
	cout << "\n   CCCCC      A        SSSSSSSSS   IIIIIIIII  NN     NN    OOOOOOOO     ";
	cout << "\n CC          A  A      SS             III     NN N   NN   OO      OO    ";
	cout << "\nCC          A    A     SSSSSSSSS      III     NN  N  NN   OO      OO    ";
	cout << "\n CC        AAAAAAAA           SS      III     NN   N NN   OO      OO    ";
	cout << "\n   CCCCC  A        A   SSSSSSSSS   IIIIIIIII  NN     NN    OOOOOOOO     ";
	cout << "\n===============================================================================================\n";
    cout << "\n\nEnter Your Name: ";
    cin >> playerName;
    cout << "Enter your initial balance: ";
    cin >> amount;

    SlotMachine game(amount, playerName);
    game.rules();

    while (true) {
        game.spin();
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
