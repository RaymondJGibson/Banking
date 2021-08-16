/* AUTHOR: Raymond J Gibson
 * DATE CREATED: 8/1/2021
 * LAST MODIFIED: 8/1/2021
 * This program will take user input in the form of an initial deposit, a monthly recurring deposit, an interest rate,
 * and a term in years. From here it will calculate the balance of the account every year as well as how much interest
 * was earned in that year.
 */


#include <iostream>
#include "Menu.h"
#include "GetInput.h"
#include "Calculations.h"

using namespace std;

int main() {
    char user_input;
    // instantiate our class objects
    Menu main_menu;
    GetInput user_in;
    Calculations calcs;

    // do function calls to get our menu and set values
    main_menu.menu1();
    try {
    user_in.setInitialInvestment();
    user_in.setMonthlyDeposit();
    user_in.setAnnualInterest();
    user_in.setNumberOfYears();
    main_menu.menu2(user_in.getInitialInvestment(), user_in.getMonthlyDeposit(), user_in.getAnnualInterest(),
                    user_in.getNumberOfYears());
    }
    catch(...){
        cout << "Hmm... something went wrong with Input, please report to IT.";
    }

    // This is for the press any key to continue requirement.
    cout << "Press any key to continue" << endl;
    cin >> user_input;

    main_menu.menu3(calcs.CalculateValues(user_in.getInitialInvestment(), user_in.getMonthlyDeposit(),
                                          user_in.getAnnualInterest(), user_in.getNumberOfYears()), 1);
    main_menu.menu3(calcs.CalculateValuesNoInterest(user_in.getInitialInvestment(), user_in.getMonthlyDeposit(),
                                                    user_in.getAnnualInterest(), user_in.getNumberOfYears()), 0);
    return 0;
}
