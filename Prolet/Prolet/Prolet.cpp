#include <iostream>

int get_int();
double calculate_per_capita_gdp_estimate(int quarters_from_epoch);
std::string format_money(double money);
std::string quarter_to_ordinal(int quarter);

/*
The purpose of the main method is to calculate the expected
per-capita GDP in a given quarter of a given year. This will
help determine the trend of living standards over time.
*/
int main() {
	int epochYear = 0;
	int epochQuarter = 0;
	int quartersPerYear = 4;
	int const epoch = 1977 * quartersPerYear;

	std::cout << "Please enter the year for the calculation: ";
	epochYear = get_int();

	std::cout << "Please enter the quarter for the calculation: ";
	epochQuarter = get_int();

	int quartersSinceYearZero = epochYear * 4 + (epochQuarter - 1);
	int quartersBetweenDates = quartersSinceYearZero - epoch;

	std::cout << "In the " << quarter_to_ordinal(epochQuarter) + " quarter of " << epochYear << ", the projected contribution to GDP per working-age person is $" << format_money(calculate_per_capita_gdp_estimate(quartersBetweenDates)) << ".\n";

	return 0;
}