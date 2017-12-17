#include "stdafx.h"
#include <iostream>
#include <string>

class Point2D
{
public:
	Point2D(double x, double y);
	std::string ToString();
	double DistanceTo(Point2D that);

private:
	double x;
	double y;
};

std::string Point2D::ToString()
{
	return "x1:" + std::to_string(this->x) + " x2:" + std::to_string(this->y);
}

Point2D::Point2D(double x, double y)
{
	this->x = x;
	this->y = y;
}

double Point2D::DistanceTo(Point2D that)
{
	return std::sqrt(std::pow(this->x - that.x, 2) + std::pow(this->y - that.y, 2));
}

std::string Remove(std::string str)
{
	int index = 0;
	while ((index = str.find("  "), index) != -1)
	str = str.replace(index, 2, " ");

	return str;
}

std::string* Split(std::string str)
{
	int index;
	std::string* splited = new std::string[2];
	if ((index = str.find(',')) != -1)
		str.replace(index, 1, " ");
	str = Remove(str);

	splited[0] = str.substr(0, str.find(' '));
	splited[1] = str.substr(str.find(' ') + 1);

	return splited;
}

int main(void)
{
	std::string input;
	std::string* splitedString;

	std::cout << "first x, y: ";
	std::getline(std::cin, input);

	splitedString = Split(input);
	Point2D point1(std::stod(splitedString[0]), std::stod(splitedString[1]));

	std::cout << "second x, y: ";
	std::getline(std::cin, input);

	splitedString = Split(input);
	Point2D point2(std::stod(splitedString[0]), std::stod(splitedString[1]));

	std::cout << point1.DistanceTo(point2) << std::endl;

	return 0;
}

