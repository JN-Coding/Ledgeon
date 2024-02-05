#include <iostream>
//Program promts user for two separate years, and the amount of patients seen in those years. 
//Using the given constant CharityRatio, the program calculates the amount of money the hospital
// issued in charity charges. It then calculates the increase in patients seen between the two years as a percent. 
int main() {

//Etablish variables
	int YearA;
	int YearB;
	double YearAPatients;
	double YearBPatients;
	double YearACharity;
	double YearBCharity;
	float PatientDifference;

//Creates the constant variable for ratio
	const double CharityRatio = 1008.97;

//Promts the user for values
	std::cout << "Enter the first year: ";
	std::cin >> YearA;
	std::cout << "Enter the number of patients we saw that year: ";
	std::cin >> YearAPatients;
	std::cout << "Enter the second year: ";
	std::cin >> YearB;
	std::cout << "Enter the number of patients we saw that year: ";
	std::cin >> YearBPatients;

//Calculations for percent difference and charity charges
	PatientDifference = ((YearBPatients - YearAPatients) / YearAPatients) * 100;
	YearACharity = (YearAPatients) * CharityRatio;
	YearBCharity = (YearBPatients) * CharityRatio;

// displays the outputs for charity charges of both years and the percent increase of patients seen. 
	std::cout << "In year " << YearA << ", our hospital issued " << YearACharity << " dollars of charity charges.\n"
		<< "In year " << YearB << ", our hospital issued " << YearBCharity << " dollars of charity charges.\n"
		<< "Between " << YearA << " and " << YearB << ", there was a " << PatientDifference << "% increase in patients seen at our hospital.\n";
}