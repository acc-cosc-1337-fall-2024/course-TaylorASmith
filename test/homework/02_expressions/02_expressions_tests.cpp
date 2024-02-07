#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "hwexpressions.h"

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

    std::cout << "Enter the meal amount: ";
    std::cin >> meal_amount;

    tax_amount = get_sales_tax_amount(meal_amount);

    std::cout << "Enter the tip rate (in decimal form): ";
    std::cin >> tip_rate;

    tip_amount = get_tip_amount(meal_amount, tip_rate);

    total = meal_amount + tax_amount + tip_amount;

    std::cout << "Meal Amount:     " << meal_amount << std::endl;
    std::cout << "Sales Tax:         " << tax_amount << std::endl;
    std::cout << "Tip Amount:       " << tip_amount << std::endl;
    std::cout << "Total:                " << total << std::endl;

    return 0;
}


double get_sales_tax_amount(double meal_amount); 
{	return meal_amount * 0.0675;
}

double get_tip_amount(double meal_amount, double tip_rate);
{	return meal_amount * tip_rate;	}