#include<iostream>
#include<time.h>
#include<vector>
#include <algorithm>

template <typename T>
T* CreateArray(int size)
{
	int max = 20, min = -20;
	srand(time(0));
	T* array = new T[size];
	for (int i = 0; i < size; i++)
		array[i] = min + rand() % (100 * (max - min)) / 100.f;
	return array;
}
template <typename T>
T* PrintArray(T* array,int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << array[i] << " ";
	}
	return 0;
}
template <typename T>
T* SortArray(T* array,int size)
{
	T tmp = 0;
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (array[j] > array[j + 1]) {
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
			}
		}
	}
	return array;
}
template <typename T> 
T* SearchElementInArray(T* array,T element,T size)
{
	for (int i = 0; i < size; i++)
	{
		if (array[i] == element)
			std::cout << "Searching element: " << array[i]<<" " << "Index: " <<" " << i;
		else
			continue;
	}
	return array;
}
int main()
{
	int size;
	std::cout << "Enter the size: \n";
	std::cin >> size;
	unsigned int choice;
	std::cout << "Enter type of your array\n\t1. int\n\t2. float\n\t3. double\n\t ";
	std::cin >> choice;
	switch (choice)
	{
	case 1:
	{
		int element;
		int* array = new int[size];
		array = CreateArray<int>(size);
		std::cout << "Generated array: ";
		PrintArray<int>(array,size);
		std::cout << "\nSorted array: ";
		array = SortArray<int>(array,size);
		PrintArray<int>(array, size);
		std::cout << "\nEnter the searching element: \n";
		std::cin >> element;
		SearchElementInArray<int>(array, element, size);
		break;
	}
	case 2:
	{
		float element;
		float* array = new float[size];
		array = CreateArray<float>(size);
		std::cout << "Generated array: ";
		PrintArray<float>(array,size);
		std::cout << "\nSorted array: ";
		array = SortArray<float>(array,size);
		PrintArray<float>(array, size);
		std::cout << "\nEnter the searching element: \n";
		std::cin >> element;
		SearchElementInArray<float>(array, element, size);
		break;
	}
	case 3:

	{
		double element;
		double* array = new double[size];
		array = CreateArray<double>(size);
		PrintArray<double>(array,size);
		std::cout << "\nSorted array: ";
		array = SortArray <double>(array,size);
		PrintArray<double>(array, size);
		std::cout << "\nEnter the searching element: \n";
		std::cin >> element;
		SearchElementInArray<double>(array, element, size);
		break;
	}
	default:
	std::cout << "Wrong choice!!!";
		break;
	}
	return 0;
}