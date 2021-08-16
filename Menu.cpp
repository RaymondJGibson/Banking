#include <vector>
#include "Menu.h"
#include <iostream>
#include <iomanip>
#include "Calculations.h"

using namespace std;

void Menu::menu1() {
    //display first static menu this method has no input and no return it just outputs static text when called.
    try {
        cout << setfill('*') << setw(34) << "" << endl;
        cout << "Please enter required information:" << endl;
        cout << setfill('*') << setw(34) << "" << endl;
        cout << "Initial Invement Amount:" << endl;
        cout << "Monthly Deposit:" << endl;
        cout << "Annual Interest:" << endl;
        cout << "Number of Years:" << endl;
        cout << setfill('*') << setw(34) << "" << endl;
        cout << endl;
    }
    catch(...){
        cout << "Hmm... something went wrong in Menu, please report to IT.";
    }
}

void Menu::menu2(double t_initalInvestMentAmount, double t_depositMonthly, double t_annualInterestRate, int t_numYears) {
    /* This method take our initial inputs and marries them to our static text from above. It takes 4 params:
     * double t_initalInvestMentAmount - the amount first invested
     * double t_depositMonthly - how much will be contributed monthly
     * double t_annualInterestRate - the interest rate
     * int t_numYears - how long we will calculate for in years
     * This function does not return anything just prints formatted text
     */

    initialDeposit = t_initalInvestMentAmount;
    monthlyDeposit = t_depositMonthly;
    rate = t_annualInterestRate;
    years = t_numYears;

    //display second menu with user input
    try {
    cout << setfill('*') << setw(34) << "" << endl;
    cout << setfill('*') << setw(34) << "" << endl;
    cout << "Initial Invement Amount: " << initialDeposit << endl;
    cout << "Monthly Deposit: " << monthlyDeposit << endl;
    cout << "Annual Interest: " << rate << endl;
    cout << "Number of Years: " << years << endl;
    cout << setfill('*') << setw(34) << "" << endl;
    cout << setfill('*') << setw(34) << "" << endl;
    cout << endl;
    }
    catch(...){
        cout << "Hmm... something went wrong in Menu, please report to IT.";
    }

}

void Menu::menu3(vector<vector<double>> t_calculations, bool t_withInterest) {
    /* This function formats our vector of vectors which does all the real calculations. It takes two params:
     * vector<vector<double>> t_calculations - this is the vector of vector where we do our math
     * bool t_withInterest - this tells us which version to print with monthly deposits or not
     *
     */

    try {
    calcs = t_calculations;
    cout << setfill('*') << setw(55) << "" << endl;

    // here we switch between monthly deposits or not.
    if (t_withInterest){
        cout << "Calculations include additional monthly deposits" << endl;
    }
    else {
        cout << "Calculations do not include additional monthly deposits" << endl;
    }

    cout << "Year | Year End Balance | Year End Earned Interest" << endl;
    cout << setfill('*') << setw(55) << "" << endl;
    cout << left;
    // simple for loop to output the data we are looking for.
    for (int i = 0; i < calcs.size(); i++){
            if ((i + 1) % 12 == 0){
                cout << setfill(' ') << setw(4) << (calcs.at(i).at(0) / 12) << " | ";
                cout << fixed << setprecision(2);
                cout << setw(16) << calcs.at(i).at(5) << " | ";
                cout << ((calcs.at(i).at(5)) - (calcs.at(i-11).at(1))) << endl;
                cout << fixed << setprecision(0);
        }
    }
    cout << endl;
    }
    catch(...){
        cout << "Hmm... something went wrong in Menu, please report to IT.";
    }
}