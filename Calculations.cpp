#include <iostream>
#include "Calculations.h"
#include "GetInput.h"

// We will make a vector of vectors. Each vector in the vector will have 6 elements,
// Month, OpeningBalance, DepositedAmount, Total, Interest, and ClosingBalance

vector <vector<double>> Calculations::CalculateValues(double t_ideposit, double t_mdeposit, double t_rate,
                                                      double t_years) {
    /* This is the function that does the heavy lifting in our program. It is a vector of vectors, the first one is
     * populated manually our input data, after that we loop through it using vector.at() to do all the math we want.
     * take four params:
     * double t_ideposit - the initial deposit
     * double t_mdeposit - the monthly deposit
     * double t_rate - the interest rate
     * double t_years - the length in yeas
     * Returns a Vector of Vectors of doubles
     */
    try {
    int months = t_years * 12;
    vector<vector<double> > vec(months, vector<double>(6));
    // (Opening Amount + Deposited Amount) * ((Interest Rate/100)/12)

    // Populate initial vector
    vec.at(0).at(0) = 1;
    vec.at(0).at(1) = t_ideposit;
    vec.at(0).at(2) = t_mdeposit;
    vec.at(0).at(3) = t_ideposit + t_mdeposit;
    vec.at(0).at(4) = (t_ideposit + t_mdeposit) * ((t_rate/100)/12);
    vec.at(0).at(5) = t_ideposit + t_mdeposit + (t_ideposit + t_mdeposit) * ((t_rate/100)/12);

    // populate rest of vector.
    for (int i = 1; i < vec.size(); i++){
        vec.at(i).at(0) = i + 1;
        vec.at(i).at(1) = vec.at(i - 1).at(5);
        vec.at(i).at(2) = t_mdeposit;
        vec.at(i).at(3) = vec.at(i - 1).at(5) + t_mdeposit;
        vec.at(i).at(4) = (vec.at(i - 1).at(5) + t_mdeposit) * ((t_rate/100)/12);
        vec.at(i).at(5) = (vec.at(i - 1).at(5) + t_mdeposit) + (vec.at(i - 1).at(1) + t_mdeposit)
                * ((t_rate/100)/12);
    }
    return vec;
    }
    catch(...){
        cout << "Hmm... something went wrong in Calculations, please report to IT.";
    }
}

vector <vector<double>> Calculations::CalculateValuesNoInterest(double t_ideposit, double t_mdeposit, double t_rate,
                                                                double t_years) {
    /* This is a copy of the CalculateValues function but w/ monthly deposits set to 0. It is a vector of vectors,
     * the first one is
     * populated manually our input data, after that we loop through it using vector.at() to do all the math we want.
     * take four params:
     * double t_ideposit - the initial deposit
     * double t_mdeposit - the monthly deposit
     * double t_rate - the interest rate
     * double t_years - the length in yeas
     * Returns a Vector of Vectors of doubles
     */
    try {
    int months = t_years * 12;
    t_mdeposit = 0;
    vector<vector<double> > vec(months, vector<double>(6));
    // (Opening Amount + Deposited Amount) * ((Interest Rate/100)/12)

    // Populate initial vector
    vec.at(0).at(0) = 1;
    vec.at(0).at(1) = t_ideposit;
    vec.at(0).at(2) = t_mdeposit;
    vec.at(0).at(3) = t_ideposit + t_mdeposit;
    vec.at(0).at(4) = (t_ideposit + t_mdeposit) * ((t_rate/100)/12);
    vec.at(0).at(5) = t_ideposit + t_mdeposit + (t_ideposit + t_mdeposit) * ((t_rate/100)/12);

    // populate rest of vector.
    for (int i = 1; i < vec.size(); i++){
        vec.at(i).at(0) = i + 1;
        vec.at(i).at(1) = vec.at(i - 1).at(5);
        vec.at(i).at(2) = t_mdeposit;
        vec.at(i).at(3) = vec.at(i - 1).at(5) + t_mdeposit;
        vec.at(i).at(4) = (vec.at(i - 1).at(5) + t_mdeposit) * ((t_rate/100)/12);
        vec.at(i).at(5) = (vec.at(i - 1).at(5) + t_mdeposit) + (vec.at(i - 1).at(1) + t_mdeposit) * ((t_rate/100)/12);
    }
    return vec;
    }
    catch(...){
        cout << "Hmm... something went wrong in Calculations, please report to IT.";
    }
}