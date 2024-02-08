//example
#include "catch.hpp"
int add_numbers(int num1, int num2);

//write function prototype here
TEST_CASE("get_sales_tax_amount")
{
    get_sales_tax_amount (10) == 0.675;
    get_sales_tax_amount (20) == 1.35;
}

TEST_CASE("get_tip_amount")
{
    get_tip_amount (20, 0.15) == 3;
    get_tip_amount (20, 0.2) == 4;
}
