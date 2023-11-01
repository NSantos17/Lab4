#include "TempChart.h"

int main() {
	TempChart chart;

	chart.readTemperaturesFromFile("Temperatures.txt");			//reads the temps from "Temperatures.txt"

	chart.drawChart();											//creates the graph

}
