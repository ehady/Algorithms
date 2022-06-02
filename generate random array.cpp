#include <iostream>
void generate_array(int *a, int n);
void display_array(int *a, int n);
double average(int *a, int n);

int main()
{
	const int asize=10;
	int array[asize];
	generate_array(array,asize);
	display_array(array,asize);
	std::cout<<std::endl<<"The arithmetic average of elements that have positive and divisible by 5 value is: "<<average(array,asize);

}

void generate_array(int *a, int n)
{
	for(int i=0; i<n; ++i)
	{
		a[i]=rand()%100+(-100);
	}
}

void display_array(int *a, int n)
{
	for (int i=0; i<n; ++i)
	{
		std::cout<<a[i]<<"\t";
	}
}
double average(int *a, int n)
{
	double sum=0.0;
	int counter=0;
	for(int i=0; i<n; ++i)
	{
		if(a[i]>0 && a[i]%5==0)
		{
			sum+=a[i];
			++counter;
		}
	}
	return sum/counter;
}


