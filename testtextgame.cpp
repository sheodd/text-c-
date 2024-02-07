#include <iostream>
#include <string>

using namespace std;

int main() {
    int health = 100;
    int oxygen = 100;
    string playerName;

    int room1Visits = 0;
    int room2Visits = 0;
    int room3Visits = 0;
    int room4Visits = 0;
    int room5Visits = 0;
    int room6Visits = 0;

    cout << "Welcome to the Text Adventure Game!\n";
    cout << "Enter your name: ";
    getline(cin, playerName);

    cout << "\nHello, " << playerName << "! Let's begin.\n";

    // Game loop
    while (health > 0 && oxygen > 0) {
        int choice;

        cout << "Health: " << health << "\n";
        cout << "Oxygen:" << oxygen << "\n";
        cout << "\n--- Room Selection ---\n";
        cout << "1. Room 1 (Visits: " << room1Visits << ")\n";
        cout << "2. Room 2 (Visits: " << room2Visits << ")\n";
        cout << "3. Room 3 (Visits: " << room3Visits << ")\n";
        cout << "4. Room 4 (Visits: " << room4Visits << ")\n";
        cout << "5. Room 5 (Visits: " << room5Visits << ")\n";
        cout << "6. Room 6 (Visits: " << room6Visits << ")\n";
        cout << "0. Quit\n";
        cout << "Enter your choice (0-6): ";
        cin >> choice;

        // Clear input buffer
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        if (choice == 0) {
            // Quit the game
            break;
        }

        switch (choice) {
        case 1:
            cout << "\nYou are in Room 1.\n";
            room1Visits++;
            if (room1Visits >= 1) {
                health -= 10;
                oxygen -= 5;
            }
            // Perform actions and update health/oxygen variables
            return 1;
            break;
        case 2:
            cout << "\nYou are in Room 2.\n";
            room2Visits++;
            if (room2Visits >= 1) {
                health -= 10;
                oxygen -= 5;
            }
            // Perform actions and update health/oxygen variables
            break;
        case 3:
            cout << "\nYou are in Room 3.\n";
            room3Visits++;
            if (room3Visits >= 1) {
                health -= 10;
                oxygen -= 5;
            }
            // Perform actions and update health/oxygen variables
            break;
        case 4:
            cout << "\nYou are in Room 4.\n";
            room4Visits++;
            if (room4Visits >= 1) {
                health -= 10;
                oxygen -= 5;
            }
            // Perform actions and update health/oxygen variables
            break;
        case 5:
            cout << "\nYou are in Room 5.\n";
            room5Visits++;
            if (room5Visits >= 1) {
                health -= 10;
                oxygen -= 5;
            }
            // Perform actions and update health/oxygen variables
            break;
        case 6:
            cout << "\nYou are in Room 6.\n";
            room6Visits++;
            if (room6Visits >= 1) {
                health -= 10;
                oxygen -= 5;
            }
            // Perform actions and update health/oxygen variables
            break;
        default:
            cout << "\nInvalid choice. Please try again.\n";
        }

        // Check player's health and oxygen levels
        if (health <= 0) {
            cout << "\nGame over! Your health reached 0.\n";
        }
        else if (oxygen <= 0) {
            cout << "\nGame over! Your oxygen level reached 0.\n";
        }
    }

    cout << "\nThank you for playing the Text Adventure Game, " << playerName << "!\n";

    return 0;
}