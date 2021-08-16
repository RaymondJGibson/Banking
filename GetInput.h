
class GetInput {
public:
    void setInitialInvestment();
    void setMonthlyDeposit();
    void setAnnualInterest();
    void setNumberOfYears();
    double getInitialInvestment();
    double getMonthlyDeposit();
    double getAnnualInterest();
    int getNumberOfYears();
private:
    double m_initialInvestment = 0.0;
    double m_monthlyInvestment = 0.0;
    double m_annualInterest = 0.0;
    int m_numYears = 0;
};
