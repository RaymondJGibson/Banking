#include <vector>

using namespace std;

class Menu {
public:
    void menu1();
    void menu2(double t_initalInvestMentAmount, double t_depositMonthly, double t_annualInterestRate, int t_numYears );
    void menu3(vector<vector<double>> t_calculations, bool t_withInterest);
private:
    double initialDeposit;
    double monthlyDeposit;
    double rate;
    int years;
    vector<vector<double>> calcs;
};