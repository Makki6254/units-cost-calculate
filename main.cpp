#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;


const int ROWS = 3;
const int COLS = 3;

const double RATE_SLAB1 = 10.0;
const double RATE_SLAB2 = 15.0;
const double RATE_SLAB3 = 20.0;


int data[ROWS][COLS] = {
    {55, 65, 75},
    {120, 150, 170},
    {210, 230, 240}
};


void costSlab1() {
    double cost;

    cout << "The cost for slab 1 is:\n";
    cout << "---------------------------------------------------------------\n";
    cout << "Consumer ID\tUnits\tRate\tCost\n";
    cout << "---------------------------------------------------------------\n";
    // Loop through the columns of the data array for slab 1
    for (int i = 0; i < COLS; i++) {

        cost = data[0][i] * RATE_SLAB1;
        // Display the consumer ID, units, rate, and cost for slab 1
        cout << 21026 + i << "\t\t"; // consumer ID is the column index plus one
        cout << data[0][i] << "\t";
        cout << RATE_SLAB1 << "\t";
        cout << fixed << setprecision(2) << cost << "\n"; // format the cost to two decimal places
    }
    cout << "---------------------------------------------------------------\n";
}

// Function to calculate and display the cost for slab 2
void costSlab2() {
    double cost;

    cout << "The cost for slab 2 is:\n";
    cout << "---------------------------------------------------------------\n";
    cout << "Consumer ID\tUnits\tRate\tCost\n";
    cout << "---------------------------------------------------------------\n";
    // Loop through the columns of the data array for slab 2
    for (int i = 0; i < COLS; i++) {
        // Calculate the cost for slab 2
        cost = data[1][i] * RATE_SLAB2;
        // Display the consumer ID, units, rate, and cost for slab 2
        cout << 21026 + i << "\t\t"; // consumer ID is the column index plus one
        cout << data[1][i] << "\t";
        cout << RATE_SLAB2 << "\t";
        cout << fixed << setprecision(2) << cost << "\n"; // format the cost to two decimal places
    }
    cout << "---------------------------------------------------------------\n";
}

// Function to calculate and display the cost for slab 3
void costSlab3() {
    double cost;

    cout << "The cost for slab 3 is:\n";
    cout << "---------------------------------------------------------------\n";
    cout << "Consumer ID\tUnits\tRate\tCost\n";
    cout << "---------------------------------------------------------------\n";
    // Loop through the columns of the data array for slab 3
    for (int i = 0; i < COLS; i++) {
        // Calculate the cost for slab 3
        cost = data[2][i] * RATE_SLAB3;
        // Display the consumer ID, units, rate, and cost for slab 3
        cout << 21026 + i << "\t\t"; // consumer ID is the column index plus one
        cout << data[2][i] << "\t";
        cout << RATE_SLAB3 << "\t";
        cout << fixed << setprecision(2) << cost << "\n"; // format the cost to two decimal places
    }
    cout << "---------------------------------------------------------------\n";
}

// Function to get user input as integer within a range
int input_int(string prompt, int min, int max) {
    int value;
    bool valid;
    do {
        cout << prompt;
        cin >> value;
        if (cin.good() && value >= min && value <= max) {
            valid = true;
        } else {
            valid = false;
            cout << "Invalid input. Please enter an integer between " << min << " and " << max << ".\n";
            cin.clear();
            cin.ignore(1000, '\n');
        }
    } while (!valid);
    return value;
}

// Main function
int main() {
    int choice;
    bool exit;

    cout << "Student's ID: 21026(M.MAKKI)\n";

    do {
        cout << "--------------------------------------\n";
        cout << "Please choose an option from the menu:\n";
        cout << "1. Cost for slab 1 & slab 2\n";
        cout << "2. Cost for slab 3\n";
        cout << "3. Press Any Key To Exit \n";
        cout << "---------------------------------------\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                // Cost for slab 1
                costSlab1();
                costSlab2();
                break;
            case 2:
                // Cost for slab 2
                 costSlab3();
                break;
            default:
                // Exit for any other key or input greater than 3
                exit = (choice > 2);
                if (exit) {
                    cout << "Thank you for using the Electricity Consumption System.\n";
                } else {
                    cout << "Invalid choice. Please try again.\n";
                }
                break;
        }

        // Clear the input buffer
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

    } while (!exit); // repeat until exit

    return 0; // end the program
}
