#include<iostream>
template <class T>
class ExponentArray {
	int size;
	T* array;
public:
	Task()
	{
		SetSize(5);
	}
	~Task(){}
	T* CreateArray() {
		int max = 20, min = -20;
		srand(time(0));
		array = new T[size];
		for (int i = 0; i < size; i++)
			array[i] = min + rand() % (100 * (max - min)) / 100.f;
		return array;
	}
	T PrintArray() {
		for (int i = 0; i < size; i++) {
			std::cout << array[i] << " ";
		}
		return 0;
	}

	T GetSize()
	{
		return size;
	}
	void SetSize(int value)
	{
		size = value;
	}
	T* CreateNewArrayWithExponent()
	{
		for (int i = 0; i < size; i++)
		{
			array[i] = exp(array[i]);
		}
		PrintArray();
		return array;
	}
};
int main_2()
{
    unsigned int size;
    std::cout << "Type size of array: \n";
    std::cin >> size;
    std::cout << "Choose type of your array\n\t1. int\n\t2. float\n\t3. double\n";
    unsigned int choice;
    std::cin >> choice;
    switch (choice) {
    case 1: {
        ExponentArray<int> object;
        object.SetSize(size);
        std::cout << "Generate array: \n";
        object.CreateArray();
        object.PrintArray();
        std::cout << "\nMake elements of array squared: \n";
        object.CreateNewArrayWithExponent();
        object.PrintArray();
        break;
    }
    case 2: {
        ExponentArray<float> object;
        object.SetSize(size);
        std::cout << "Generate array: \n";
        object.CreateArray();
        object.PrintArray();
        std::cout << "\nMake elements of array squared: \n";
        object.CreateNewArrayWithExponent();
        object.PrintArray();
        break;
    }
    case 3: {
        ExponentArray<double> object;
        object.SetSize(size);
        std::cout << "Generate array: \n";
        object.CreateArray();
        object.PrintArray();
        std::cout << "\nMake elements of array squared: \n";
        object.CreateNewArrayWithExponent();
        object.PrintArray();
        break;
    }
    default: {
        std::cout << "Wrong number";
        break;
    }
    }
    return 0;
}