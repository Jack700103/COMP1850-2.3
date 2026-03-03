#include <stdio.h>

/*
 * Portfolio submission
 * Name: Your Name
 * ID: Your ID
 */

int main(void) {
    // Initialize problem data
    double salary = 36250.0;
    double ni_rate = 8.0;    // 8% National Insurance
    double tax_rate = 15.0;  // 15% tax rate

    // Calculate deductions
    double ni_deduction = salary * (ni_rate / 100.0);
    double remaining_after_ni = salary - ni_deduction;
    double taxable_income = (remaining_after_ni > 12500.0) ? (remaining_after_ni - 12500.0) : 0.0;
    double tax_deduction = taxable_income * (tax_rate / 100.0);
    double take_home = remaining_after_ni - tax_deduction;

    // Print results with 2 decimal places
    printf("Salary £%.2f\n", salary);
    printf("NI contribution £%.2f\n", ni_deduction);
    printf("Tax contribution £%.2f\n", tax_deduction);
    printf("Take home salary £%.2f\n", take_home);

    return 0;
}
