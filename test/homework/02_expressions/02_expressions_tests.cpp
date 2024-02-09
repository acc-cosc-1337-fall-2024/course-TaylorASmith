#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "hwexpressions.h"
#include <iostream>

TEST_CASE("Verify Test Configuration", "verification") 
{	REQUIRE(true == true);	}

TEST_CASE("Verify sum_numbers function") 
{
	REQUIRE(add_numbers(5, 5) == 10);
	REQUIRE(add_numbers(10, 10) == 20);
}

double get_sales_tax_amount(double meal_amount);
double get_tip_amount(double meal_amount, double tip_rate);

int main() {
    double meal_amount, tip_rate, tip_amount, tax_amount, total;

    cout << "Enter the meal amount: ";
    cin >> meal_amount;

    tax_amount = get_sales_tax_amount(meal_amount);

    cout << "Enter the tip rate (in decimal form): ";
    cin >> tip_rate;

    tip_amount = get_tip_amount(meal_amount, tip_rate);

    total = meal_amount + tax_amount + tip_amount;

    cout << "Meal Amount:     " << meal_amount << endl;
    cout << "Sales Tax:         " << tax_amount << endl;
    cout << "Tip Amount:       " << tip_amount << endl;
    cout << "Total:                " << total << endl;

    return 0;
}


double get_sales_tax_amount(double meal_amount) 
{	return meal_amount * 0.0675;
}

double get_tip_amount(double meal_amount, double tip_rate)
{	return meal_amount * tip_rate;	}