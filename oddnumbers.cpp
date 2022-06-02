#include <iostream>
#include <ctime>
#include <cstdlib>

int main()
{
	int n;
	std::cout << "Enter the most value the calculations will repeat: ";
	std::cin >> n;
	char answer;
	int counter = 0;
	double sum = 0.0;
	int largest;
	int i=0;

	while ( i<n && answer=='y' )
	{
		
			std::cout << std::endl;
			int x;
			std::cout << "Enter integer :";
			std::cin >> x;

			if (i = 0 || x > largest)
			{
				largest = x;
			}

			if (x < 0)
			{
				if (x % 2 == 0)
					std::cout << x << " is negative and even.";
				else
				{
					std::cout << x << " is negative and odd.";
					++counter;
					sum += x;
				}
			}
			else
			{
				if (x == 0)
				{
					std::cout << "zero.";
					break;
				}
				
					if (x % 2 == 0)
						std::cout << x << " is positive and even.";
					else
					{
						std::cout << x << " is positive and odd.";
						++counter;
						sum += x;
					}
				
			}
			++i;
			std::cout << std::endl
					  << "Continue? Y/N:";
			std::cin >> answer;
			
		
	}

	double average = sum / counter;
	std::cout << std::endl
			  << "There are " << counter << " odd numbers" << std::endl;
	std::cout << "The arithmetic average of odd numbers is: " << average;
	std::cout << "The highest value of integers is: " << largest;
}

