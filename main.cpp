#include <iostream>
#include <string>
#include "GroceryTracker.h"
using namespace std;

int main() {
    GroceryTracker tracker;
    int userChoice;
    string itemName;

    tracker.LoadFile("CS210_Project_Three_Input_File.txt");
    tracker.CreateBackupFile("frequency.dat");

    do {
        cout << endl;
        cout << "===== Corner Grocer Item Tracker =====" << endl;
        cout << "1. Search for an item frequency" << endl;
        cout << "2. Print all item frequencies" << endl;
        cout << "3. Print item frequency histogram" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> userChoice;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid input. Please enter a number from 1 to 4." << endl;
            continue;
        }

        switch (userChoice) {
        case 1:
            cout << "Enter the item you want to search for: ";
            cin >> itemName;

            cout << itemName << " appears "
                << tracker.GetItemFrequency(itemName)
                << " time(s)." << endl;
            break;

        case 2:
            cout << endl;
            cout << "Item Frequencies" << endl;
            tracker.PrintAllFrequencies();
            break;

        case 3:
            cout << endl;
            cout << "Item Histogram" << endl;
            tracker.PrintHistogram();
            break;

        case 4:
            cout << "Exiting program. Goodbye!" << endl;
            break;

        default:
            cout << "Invalid choice. Please enter a number from 1 to 4." << endl;
            break;
        }

    } while (userChoice != 4);

    return 0;
}