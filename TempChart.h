#ifndef TEMPCHART_H
#define TEMPCHART_H

#include <vector>
#include <string>

class TempChart {
private:
	std::vector<int> temperatures;

public:
	TempChart();
	void readTemperaturesFromFile(const std::string& filename);
	void drawChart() const;
};

#endif
