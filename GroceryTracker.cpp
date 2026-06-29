#include "GroceryTracker.h"
#include <iostream>
#include <fstream>
using namespace std;

void GroceryTracker::LoadFile(string fileName) {
    ifstream inputFile(fileName);
    string item;

    if (!inputFile) {
        cout << "Error: Could not open input file." << endl;
        return;
    }

    while (inputFile >> item) {
        itemFrequency[item]++;
    }

    inputFile.close();
}

void GroceryTracker::CreateBackupFile(string fileName) {
    ofstream outputFile(fileName);

    if (!outputFile) {
        cout << "Error: Could not create backup file." << endl;
        return;
    }

    for (auto const& pair : itemFrequency) {
        outputFile << pair.first << " " << pair.second << endl;
    }

    outputFile.close();
}

int GroceryTracker::GetItemFrequency(string itemName) {
    if (itemFrequency.count(itemName)) {
        return itemFrequency[itemName];
    }

    return 0;
}

void GroceryTracker::PrintAllFrequencies() {
    for (auto const& pair : itemFrequency) {
        cout << pair.first << " " << pair.second << endl;
    }
}

void GroceryTracker::PrintHistogram() {
    for (auto const& pair : itemFrequency) {
        cout << pair.first << " ";

        for (int i = 0; i < pair.second; i++) {
            cout << "*";
        }

        cout << endl;
    }
}