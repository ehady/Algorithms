#include <iostream>
#include <ctime>
#include <cstdlib>
void generate_array(int *a, int n, int p, int q);
void display_array(int *a, int n);
int count_occurences(int *a, int n, int x);
int find_integer(int *a, int n, int x);

int main()
{
	const int asize = 10;
	int a[asize];
	int r1, r2;
	std::cout << "Enter a range for array: " << std::endl;
	std::cout << "From :";
	std::cin >> r1;
	std::cout << "To :";
	std::cin >> r2;
	generate_array(a, asize, r1, r2);
	display_array(a, asize);
	int x;
	std::cout << std::endl
			  << "Enter an element to check the number of occurences: ";
	std::cin >> x;
	std::cout << std::endl
			  << "The number of occurences are: " << count_occurences(a, asize, x);
	std::cout << std::endl
			  << "The index is: " << find_integer(a, asize, x);
}

void generate_array(int *a, int n, int p, int q)
{
	if (p > q)
	{
		int tmp = p;
		p = q;
		q = tmp;
	}
	int scaling = q - p + 1;

	for (int i = 0; i < n; ++i)
	{
		a[i] = p + rand() % scaling;
	}
}
void display_array(int *a, int n)
{
	for (int i = 0; i < n; ++i)
	{
		std::cout << " " << a[i];
	}
}
int count_occurences(int *a, int n, int x)
{
	int counter = 0;
	for (int i = 0; i < n; ++i)
	{
		if (a[i] == x)
			counter++;
	}
	return counter;
}

int find_integer(int *a, int n, int x)
{
	int index = -1;
	for (int i = 0; i < n; ++i)
	{
		if (a[i] == x)
		{
			index = i;
			break;
		}
	}
	return index;
}
