#include <iostream>
#include <string>
#include "stdInterface.h"
#include "editRecords.h"
#include "addRecord.h"
#include "viewRecords.h"
#include "fromtoFile.h"
#include "sortRecords.h"
using namespace std;


// Function:
// Inputs: 
// Outputs: 
void updateRecordsSize(record records[], int &sizeArray, int sizeChange) {
    cout << 1;
    cout << 2;
    for (int i = 0; i < sizeArray; i++) {
        cout << 3;
    }
    sizeArray += sizeChange;
}


// Function: 
// Inputs: 
// Outputs: 
void printTopRow(int numCol) {
    cout << string(numCol+2,'#') << endl;
}

// Function: 
// Inputs: 
// Outputs: 
void printBottomRow(int numCol) {
    cout << string(numCol+2,'#') << endl;
}

// Function: 
// Inputs: 
// Outputs: 
void printMainMenu(int numRow, int numCol) {
    printTopRow(numCol);
    int linesOfText = 8;
    cout << "Easy Accounting System" << endl;
    cout << "by Tam Fong Ching Herbert and Park Sangwon" << endl;
    cout << "" << endl;
    cout << "Please enter a command:" << endl;
    cout << "[a] Add Record" << endl;
    cout << "[v] View Records" << endl;
    cout << "[s] Statistics" << endl;
    for (int i = 0; i < numRow - 3 - linesOfText; i++)
        cout << string(numCol,' ') << endl;
    cout << "[x] Exit" << endl;
    printBottomRow(numCol);
}

int main(int argc, char ** argv) {
    int numCol = 100;
    int numRow = 12;

    int sizeArray = 1;
    record * records = new record[sizeArray];
    readFromFile(sizeArray, records);
    printMainMenu(numRow, numCol);
    char command;
    cin >> command;
    while (command != 'x') {
        switch (command) {
            case 'a': {
                record newRecord;
                printAddRecord(numRow, numCol, sizeArray, records, newRecord);
                break;
            }
            case 'v': {
                viewRecordPages(numRow, numCol, sizeArray, records);
                break;
            }
            case 's': {
                break;
            }
        }
        printMainMenu(numRow, numCol);
        cin >> command;
    }
    writeToFile(sizeArray, records);
    delete[] records;
}