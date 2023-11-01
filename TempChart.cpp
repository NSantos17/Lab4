#include "TempChart.h"
#include <iostream>
#include <fstream>
#include <iomanip>							//allows you to set the width using "setw"

TempChart::TempChart() {}

void TempChart::readTemperaturesFromFile(const std::string& filename) {
	std::ifstream file(filename);

	int temperature;											//function to pull temps from file
	while (file >> temperature) {
		if (temperature >= -30 && temperature <= 120) {
			temperatures.push_back(temperature);
		}
	}
}

void TempChart::drawChart() const {							//function to create the graph
	for (int temp = 120; temp >= -30; temp -= 3) {
		std::cout << std::setw(4) << temp << " | ";

		for (int t : temperatures) {
			if (t >= temp && t < temp + 3) {
				std::cout << "*";
			}
			else {
				std::cout << " ";
			}
		}

		std::cout << std::endl;
	}
	int consoleWidth = 60;
	int spaces = (consoleWidth - 16) / 2;

	std::cout << "    -------------------------------------------------------------\n";			//creates the line on bottom of the graph
	std::cout << std::string(spaces,' ' ) << " Temperature Chart ";								//adds title to bottom of the graph
}
