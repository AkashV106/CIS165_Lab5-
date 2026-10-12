# CIS165_Lab5-
# CIS-165 Lab 5: Compound Interest and Loan Payments

## Plan

### Program 1: Compound Interest (compound_interest.cpp)
- **Inputs:** principal, annual interest rate (as a percentage), times compounded per year
- **Percentage conversion:** rate / 100
- **Intermediate/result variables:** amount, interest_earned
- **Formulas:**
  - amount = principal * pow(1.0 + (rate / 100) / times_compounded, times_compounded)
  - interest_earned = amount - principal
- **Output:** interest rate, times compounded, principal, interest earned, and amount in savings, formatted with fixed, setprecision(2), and setw
- **Tests:** the assigned test (1000, 4.25%, 12) and a second test with different values calculated by hand first

### Program 2: Monthly Loan Payment (loan_payment.cpp)
- **Inputs:** loan amount, annual interest rate (as a percentage), number of monthly payments
- **Percentage conversion:** monthly_interest_rate = (annual_interest_rate / 100) / 12
- **Intermediate/result variables:** monthly_interest_rate, monthly_payments, amount_paid_back, total_interest_paid
- **Formulas:**
  - monthly_payments = (r * (1 + r)^n) / ((1 + r)^n - 1) * loan_amount
  - amount_paid_back = monthly_payments * number_of_monthly_payments
  - total_interest_paid = amount_paid_back - loan_amount
- **Output:** loan amount, monthly interest rate, number of payments, monthly payment, amount paid back, and interest paid, formatted with fixed, setprecision, and setw
- **Tests:** the assigned test (10000, 12%, 36) and a second test with different values calculated by hand first

## How to Compile and Run

    g++ -std=c++17 -Wall -Wextra compound_interest.cpp -o compound_interest
    ./compound_interest

    g++ -std=c++17 -Wall -Wextra loan_payment.cpp -o loan_payment
    ./loan_payment

## Tests

| Program and test | Inputs | Expected results | Actual results | Match or correction |
|---|---|---|---|---|
| Compound interest, assigned | 1000, 4.25%, 12 | Interest $43.34, amount $1,043.34 | Interest $43.34, amount $1043.34 | Match |
| Compound interest, changed | 2500, 6%, 4 | 2500 * (1.015)^4 = $2,653.41 amount, $153.41 interest | Interest $153.41, amount $2653.41 | Match |
| Loan payment, assigned | 10000, 12%, 36 | Monthly rate 0.01, payment $332.14, paid back $11,957.15, interest $1,957.15 | Monthly rate 0.010000, payment $332.14, paid back $11957.15, interest $1957.15 | Match |
| Loan payment, changed | 5000, 6%, 24 | Monthly rate 0.005, payment about $221.60, paid back $5,318.47, interest $318.47 | Monthly rate 0.005000, payment $221.60, paid back $5318.47, interest $318.47 | Match |

## Explanations

**Why must a percentage be divided by 100 before using it in a formula?**
A percentage is a number out of 100, but formulas need the decimal form. 4.25% means 0.0425, so dividing by 100 gives the correct rate.

**How does pow represent exponentiation?**
pow(base, exponent) raises the base to the exponent. pow(1.0 + rate / times_compounded, times_compounded) means (1 + rate / times_compounded) raised to the power of times_compounded.

**What does the number of compounding periods change in the savings formula?**
It changes how many times interest is added during the year and how large each interest rate is. More compounding periods mean interest is earned on previously earned interest more often, so the final amount is slightly higher.

**How is an annual interest rate converted to a monthly rate?**
Divide the percentage by 100 to get a decimal, then divide by 12 because there are 12 months in a year.

**Why should double be used for these calculations?**
Money, rates, and the results of pow have decimal parts. A double stores decimal values, while an int would cut them off and give wrong answers. I used int only for counts that are always whole numbers, like the number of payments.

**Why should calculations use full precision when money is displayed to two decimal places?**
Rounding early causes small errors that add up, especially when a rounded payment is multiplied by the number of payments. setprecision(2) only changes what is displayed, so the stored value stays accurate.

**How are the amount paid back and total interest calculated?**
The amount paid back is the monthly payment times the number of payments. The total interest is the amount paid back minus the original loan amount.

**Why are calculations stored in variables before being displayed?**
It keeps the code readable, makes each step easier to check and debug, and keeps formulas out of the cout statements.
