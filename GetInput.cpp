#include "GetInput.h"
#include <iostream>

using namespace std;
// define all our getters and setters we are using GetInput here really just as a simple data structure.
double GetInput::getInitialInvestment() {
    return m_initialInvestment;
}
double GetInput::getMonthlyDeposit() {
    return m_monthlyInvestment;
}
double GetInput::getAnnualInterest() {
    return m_annualInterest;
}
int GetInput::getNumberOfYears() {
    return m_numYears;
}
void GetInput::setInitialInvestment() {
    cin >> m_initialInvestment;
}
void GetInput::setMonthlyDeposit() {
    cin >> m_monthlyInvestment;
}
void GetInput::setAnnualInterest() {
    cin >> m_annualInterest;
}
void GetInput::setNumberOfYears() {
    cin >> m_numYears;
}
