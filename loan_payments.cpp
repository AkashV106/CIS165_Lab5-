#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
    double loan_amount;
    double annual_interest_rate;
    double number_of_monthly_payments;
    double monthly_interest_rate;
    double monthly_payments;
    double amount_paid_back;
    double total_interest_paid;

    std::cout << "Enter the loan amount: $";
    std::cin >> loan_amount;
    std::cout << "Enter the annual interest rate in percentage: ";
    std::cin >> annual_interest_rate;
    std::cout << "Enter the number of monthly payments: ";
    std::cin >> number_of_monthly_payments;

    // divide by 100 for a decimal, then by 12 for a monthly rate
    monthly_interest_rate = (annual_interest_rate / 100) / 12;
    monthly_payments = (monthly_interest_rate * pow(1.0 + monthly_interest_rate, number_of_monthly_payments))
                     / (pow(1.0 + monthly_interest_rate, number_of_monthly_payments) - 1.0)
                     * loan_amount;
    amount_paid_back = monthly_payments * number_of_monthly_payments;
    total_interest_paid = amount_paid_back - loan_amount;

    std::cout << std::fixed;
    std::cout << "\nLoan Payment Report\n";
    std::cout << "-------------------\n";
    std::cout << std::setprecision(2);
    std::cout << std::left << std::setw(28) << "Loan Amount:"
              << std::right << "$" << std::setw(11) << loan_amount << "\n";
    std::cout << std::setprecision(6);
    std::cout << std::left << std::setw(28) << "Monthly Interest Rate:"
              << std::right << std::setw(12) << monthly_interest_rate << "\n";
    std::cout << std::setprecision(2);
    std::cout << std::left << std::setw(28) << "Number of Payments:"
              << std::right << std::setw(12) << number_of_monthly_payments << "\n";
    std::cout << std::left << std::setw(28) << "Monthly Payment:"
              << std::right << "$" << std::setw(11) << monthly_payments << "\n";
    std::cout << std::left << std::setw(28) << "Amount Paid Back:"
              << std::right << "$" << std::setw(11) << amount_paid_back << "\n";
    std::cout << std::left << std::setw(28) << "Interest Paid:"
              << std::right << "$" << std::setw(11) << total_interest_paid << "\n";

    return 0;
}
