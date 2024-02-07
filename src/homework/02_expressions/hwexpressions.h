//example
#include "catch.hpp"
int add_numbers(int num1, int num2);

//write function prototype here
TEST_CASE("get_sales_tax_amount")
{
    REQUIRE get_sales_tax_amount(10) == 0.675;
    assert get_sales_tax_amount(20) == 1.35;
}

TEST_CASE("get_tip_amount")
{
    assert get_tip_amount(20, 0.15) == 3;
    assert get_tip_amount(20, 0.2) == 4;
}
