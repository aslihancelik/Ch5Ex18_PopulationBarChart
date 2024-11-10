// Ch5Ex18_PopulationBarChart.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// This program  produces a bar chart showing the population growth of Prairieville at 20-year intervals during the past 100 years. 
// The program should read in the population figures (rounded to the nearest 1,000 people) for 1900, 1920, 1940, 1960, 1980, and 2000 from a file. 
// For each year, it should display the date and a bar consisting of one asterisk for each 1,000 people.
//
// Programmer: Aslihan Aria Celik

#include <iostream>
#include <fstream>
#include <string>
#include <cmath> // Include cmath for rounding
using namespace std;

int main() {
    ifstream infile("People.txt"); // Open the file for reading

    if (!infile) {
        cerr << "Error opening file" << endl;
        return 1; // Exit if the file cannot be opened
    }

    string year;
    int population;

    cout << "PRAIRIEVILLE POPULATION GROWTH" << endl;
    cout << "(each * represents 1,000 people)" << endl;

    // Read the year and population from the file and display the bar chart
    while (infile >> year >> population) {
        // Round population to the nearest 1,000
        population = static_cast<int>(round(population / 1000.0) * 1000);

        cout << year << " ";
        for (int i = 0; i < population / 1000; ++i) {
            cout << "*";
        }
        cout << endl;
    }

    infile.close(); // Close the file after reading
    return 0;
}
