#include <vector>


using namespace std;

class Calculations {
public:
    vector<vector<double>> CalculateValues(double t_ideposit, double t_mdeposit, double t_rate, double t_years);
    vector<vector<double>> CalculateValuesNoInterest(double t_ideposit, double t_mdeposit, double t_rate, double t_years);
};
