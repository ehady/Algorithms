#include <iostream>
#include <ctime>
#include <cmath>

float triangleArea(float n);
float triangleCircumference(float n);

int main()
{
	char answer = 'y';
	int counter;
	float smallestA;
	float Area;
	while (answer == 'y' || answer == 'Y')
	{
		float a;
		std::cout << std::endl
				  << "Enter value representing side of an equilateral triangle: ";
		std::cin >> a;

		if (a > 0)
		{
			if (counter == 0)
			{
				smallestA = triangleArea(a);
			}
			else
			{
				Area = triangleArea(a);
				if (Area < smallestA)
				{
					smallestA = Area;
				}
			}

			std::cout << "The area of the triangle is: " << triangleArea(a);
			std::cout << std::endl
					  << "The circumference of the triangle is: " << triangleCircumference(a);
		}
		else
		{
			std::cout << "Incorrect value. ";
		}

		std::cout << std::endl
				  << "Continue? y/n: ";
		std::cin >> answer;
		++counter;
	}
	std::cout << "The smallest area is: " << smallestA;
}

float triangleArea(float n)
{
	float A = (sqrt(3) / 4) * pow(n, 2);
	return A;
}

float triangleCircumference(float n)
{
	float C = 3 * n;
	return C;
}