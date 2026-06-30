#include <iostream>
#include <iomanip> 
#include<windows.h>
#include<string>

using namespace std;

void loanDetails() {
    cout << "------------------------------------------------------------------------------------------";
    cout << "---------------------------------------------------------" << endl;
    cout << setw(15) << left << "|  Loan Name";
    cout << setw(10) << left << "|  Customer's Age(yrs)  ";
    cout << setw(20) << left << "|  Monthly income ";
    cout << setw(25) << left << "|  Max. Loan Amount";
    cout << setw(30) << left << "|  Max. Repay period(in months)";
    cout << setw(35) << left << "|  Annual interest rate(%) FIXED" << endl;

    cout << "------------------------------------------------------------------------------------------";
    cout << "---------------------------------------------------------" << endl;
    cout << setw(15) << left << "|  Vehicle";
    cout << setw(10) << left << "| Between 18 to 55 years";
    cout << setw(20) << left << "| Above 45,000";
    cout << setw(25) << left << "|  1,000,000.00";
    cout << setw(30) << left << "|  60";
    cout << setw(35) << left << "|  14" << endl;

    cout << "------------------------------------------------------------------------------------------";
    cout << "---------------------------------------------------------" << endl;
    cout << setw(15) << left << "|  Housing";
    cout << setw(10) << left << "| Between 25 to 55 years";
    cout << setw(20) << left << "| Above 100,000";
    cout << setw(25) << left << "|  2,500,000.00";
    cout << setw(30) << left << "|  60";
    cout << setw(35) << left << "|  8" << endl;

    cout << "------------------------------------------------------------------------------------------";
    cout << "---------------------------------------------------------" << endl;
    cout << setw(15) << left << "|  Education";
    cout << setw(10) << left << "| Between 25 to 35 years";
    cout << setw(20) << left << "| Above 45,000";
    cout << setw(25) << left << "|  1,500,000.00";
    cout << setw(30) << left << "|  284";
    cout << setw(35) << left << "|  6" << endl;

    cout << "------------------------------------------------------------------------------------------";
    cout << "---------------------------------------------------------" << endl;
    cout << setw(15) << left << "|  Senior Citizen";
    cout << setw(10) << left << "| Above 60\t\t";
    cout << setw(20) << left << "| Above 35,000";
    cout << setw(25) << left << "|  500,000.00";
    cout << setw(30) << left << "|  60";
    cout << setw(35) << left << "|  4.5" << endl;

    cout << "------------------------------------------------------------------------------------------";
    cout << "---------------------------------------------------------" << endl;
    cout << setw(15) << left << "|  Personal";
    cout << setw(10) << left << "| Between 30 to 55 years";
    cout << setw(20) << left << "| Above 100,000";
    cout << setw(25) << left << "|  2,000,000.00";
    cout << setw(30) << left << "|  60";
    cout << setw(35) << left << "|  14.5" << endl;

    cout << "------------------------------------------------------------------------------------------";
    cout << "---------------------------------------------------------" << endl;
    cout << setw(15) << left << "|  Personal";
    cout << setw(10) << left << "| Between 30 to 55 years";
    cout << setw(20) << left << "| Above 100,000";
    cout << setw(25) << left << "|  3,000,000.00";
    cout << setw(30) << left << "|  84";
    cout << setw(35) << left << "|  16.2" << endl;
    cout << "------------------------------------------------------------------------------------------";
    cout << "---------------------------------------------------------" << endl;
}
string getLoanName(int n) {
    string loanName[6] = { "Vehicle","Housing","Education","Senior Citizen","Personal","Personal" };
    return loanName[n];
}
string checkAge(int age) {
    if (age > 18 && age < 55) {
        return "Between 18 to 55 years";
    }
    else if (age > 25 && age << 55) {
        return "Between 25 to 55 years";
    }
    else if (age > 25 && age < 35) {
        return "Between 25 to 35 years";
    }
    else if (age > 60) {
        return "Above 60";
    }
    else if (age > 30 && age < 55) {
        return "Between 30 to 55 years";
    }
    else {
        return "Error";
    }
}
string checkMI(int monthlyIncome) {
    if (monthlyIncome > 45000) {
        return "Above 45,000";
    }
    else if (monthlyIncome > 100, 000) {
        return "Above 100,000";
    }
    else if (monthlyIncome > 35, 000) {
        return "Above 35,000";
    }
    else {
        return "Error";
    }
}
void getALoanDetail(string loan) {
    int maxLoanAmount = 0;
    int repayPeriod = 0;
    int interestRate = 0;
    if (loan == "Vehicle") {
        maxLoanAmount = 1, 000, 000;
        repayPeriod = 60;
        interestRate = 14;
        cout << "-------------------------------" << endl;
        cout << "\t" << loan << endl;
        cout << "-------------------------------" << endl;
        cout << " Max. Loan Amount: " << maxLoanAmount << endl;
        cout << " Maximum repay period: " << repayPeriod << endl;
        cout << " Interest Rate: " << interestRate << endl;
        cout << "-------------------------------" << endl;

    }
    else if (loan == "Housing") {
        maxLoanAmount = 2, 500, 000;
        repayPeriod = 60;
        interestRate = 8;
        cout << "-------------------------------" << endl;
        cout << "\t" << loan << endl;
        cout << "-------------------------------" << endl;
        cout << " Max. Loan Amount: " << maxLoanAmount << endl;
        cout << " Maximum repay period: " << repayPeriod << endl;
        cout << " Interest Rate: " << interestRate << endl;
        cout << "-------------------------------" << endl;

    }
    else if (loan == "Education") {
        maxLoanAmount = 1, 500, 000;
        repayPeriod = 284;
        interestRate = 6;
        cout << "-------------------------------" << endl;
        cout << "\t" << loan << endl;
        cout << "-------------------------------" << endl;
        cout << " Max. Loan Amount: " << maxLoanAmount << endl;
        cout << " Maximum repay period: " << repayPeriod << endl;
        cout << " Interest Rate: " << interestRate << endl;
        cout << "-------------------------------" << endl;

    }
    else if (loan == "Senior Citizen") {
        maxLoanAmount = 500, 000;
        repayPeriod = 60;
        interestRate = 4.5;
        cout << "-------------------------------" << endl;
        cout << "\t" << loan << endl;
        cout << "-------------------------------" << endl;
        cout << " Max. Loan Amount: " << maxLoanAmount << endl;
        cout << " Maximum repay period: " << repayPeriod << endl;
        cout << " Interest Rate: " << interestRate << endl;
        cout << "-------------------------------" << endl;

    }
    else if (loan == "Personal") {
        maxLoanAmount = 2, 000, 000;
        repayPeriod = 60;
        interestRate = 14.5;
        cout << "-------------------------------" << endl;
        cout << "\t" << loan << endl;
        cout << "-------------------------------" << endl;
        cout << " Max. Loan Amount: " << maxLoanAmount << endl;
        cout << " Maximum repay period: " << repayPeriod << endl;
        cout << " Interest Rate: " << interestRate << endl;
        cout << "-------------------------------" << endl;
        cout << endl;
        cout << "or" << endl;
        cout << endl;
        maxLoanAmount = 3, 000, 000;
        repayPeriod = 84;
        interestRate = 16.5;
        cout << "-------------------------------" << endl;
        cout << "\t" << loan << endl;
        cout << "-------------------------------" << endl;
        cout << " Max. Loan Amount: " << maxLoanAmount << endl;
        cout << " Maximum repay period: " << repayPeriod << endl;
        cout << " Interest Rate: " << interestRate << endl;
        cout << "-------------------------------" << endl;
        cout << endl;

    }
}

string displayMaxLoan(string age, string MI) {
    if (age == "Between 18 to 55 years") {
        if (MI == "Above 45,000" || MI == "Above 100,000") {
            getALoanDetail("Vehicle");
        }
        else {
            cout << "Request Denied!" << endl;
        }
    }
    else if (age == "Between 25 to 55 years") {
        if (MI == "Above 100,000") {
            getALoanDetail("Housing");
        }
        else {
            cout << "Request Denied!" << endl;
        }
    }
    else if (age == "Between 25 to 35 years") {
        if (MI == "Above 45,000" || MI == "Above 100,000") {
            getALoanDetail("Education");
        }
        else {
            cout << "Request Denied!" << endl;
        }
    }
    else if (age == "Above 60") {
        if (MI == "Above 35,000" || MI == "Above 45,000" || MI == "Above 100,000") {
            getALoanDetail("Senior Citizen");
        }
        else {
            cout << "Request Denied!" << endl;
        }
        
    }
    else if (age == "Between 30 to 55 years") {
        if (MI == "Above 100,000") {
            getALoanDetail("Personal");
        }
        else {
            cout << "Request Denied" << endl;
        }
    }
    return " ";
}


int main(){
    //set Console for full screen 
    HWND console = GetConsoleWindow();
    ShowWindow(console, SW_MAXIMIZE);

   /* string name;
    int age;
    int mIncome;
    cout << "Name: ";
    cin >> name;
    cout << "Age: ";
    cin >> age;
    cout << "Monthly Income: ";
    cin >> mIncome;
   */

    loanDetails();
    string loanName[6] = { "Vehicle","Housing","Education","Senior Citizen","Personal","Personal" };
    string cAge = checkAge(35);
    string cMI = checkMI(50000);
    displayMaxLoan(cAge, cMI);

    return 0;
}
