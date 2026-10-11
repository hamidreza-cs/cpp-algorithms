#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int employeeCount;
    cout << "How many employees? ";
    cin >> employeeCount;

    vector<double> salaries(employeeCount);
    cout << "Enter their salaries:\n";
    for (int i = 0; i < employeeCount; i++) {
        cin >> salaries[i];
    }

    double taxRate;
    cout << "Enter tax rate (e.g. 0.1 for 10%): ";
    cin >> taxRate;

    cout << "\nTax calculations:\n";
    for (int i = 0; i < employeeCount; i++) {
        double tax = salaries[i] * taxRate;
        double net = salaries[i] - tax;
        cout << "Employee " << i + 1 
             << " | Tax: " << tax 
             << " | Net: " << net << endl;
    }

    return 0;
}