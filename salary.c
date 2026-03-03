#include <stdio.h>

/*
 * Portfolio submission
 * Name: GuanJie Chen
 * ID: 201860766
 */

int main(void) {
    double salary = 36250.0;
    double ni_rate = 8.0;
    double tax_rate = 15.0; 

    double ni_deduction = salary * (ni_rate / 100.0);
    double remaining_after_ni = salary - ni_deduction;
    double taxable_income = (remaining_after_ni > 12500.0) ? (remaining_after_ni - 12500.0) : 0.0;
    double tax_deduction = taxable_income * (tax_rate / 100.0);
    double take_home = remaining_after_ni - tax_deduction;

    printf("Salary £%.2f\n", salary);
    printf("NI contribution £%.2f\n", ni_deduction);
    printf("Tax contribution £%.2f\n", tax_deduction);
    printf("Take home salary £%.2f\n", take_home);

    return 0;
}
