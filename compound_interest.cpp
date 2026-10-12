#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
    double principal;
    double rate;
    int times_compounded;
    double amount;
    double interest_earned;

    std::cout << "Enter the principal: $";
    std::cin >> principal;
    std::cout << "Enter the annual interest rate in percentage: ";
    std::cin >> rate;
    std::cout << "Enter the number of times interest is compounded during one year: ";
    std::cin >> times_compounded;

    // rate / 100 converts the percentage to a decimal
    amount = principal * pow(1.0 + (rate / 100) / times_compounded, times_compounded);
    interest_earned = amount - principal;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\nCompound Interest Report\n";
    std::cout << "------------------------\n";
    std::cout << std::left << std::setw(28) << "Interest Rate:"
              << std::right << std::setw(11) << rate << "%\n";
    std::cout << std::left << std::setw(28) << "Times Compounded:"
              << std::right << std::setw(12) << times_compounded << "\n";
    std::cout << std::left << std::setw(28) << "Principal:"
              << std::right << "$" << std::setw(11) << principal << "\n";
    std::cout << std::left << std::setw(28) << "Interest Earned:"
              << std::right << "$" << std::setw(11) << interest_earned << "\n";
    std::cout << std::left << std::setw(28) << "Amount in Savings:"
              << std::right << "$" << std::setw(11) << amount << "\n";

    return 0;
}
