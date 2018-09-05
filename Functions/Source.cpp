#include <iostream>
#include <string>

int say(std::string type)
{
	std::cout << type;
	return 0;
}



// Multiples of 3
bool IsMultipleOfThree(int value)
{
	return (value % 3 == 0);
}

//Printing to 10
void printValuesTo10()
{
	for (int i = 0; i <= 10; i++)
	{
		std::cout << i << ", ";
	}
	std::cout << std::endl;
}

//Printing between in1 & in2
void printValuesBetween(int low, int high)
{
	std::cout << "Input 2 numbers: \n\n";
	std::cin >> low >> high;
	for (int i = low; i <= high; i++)
	{
		std::cout << i << ", ";
	}
	std::cout << std::endl;
}
//Sum of Array
void ArraySum(int num[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		num[i];
	}
}

//Reverse Array
//Create a function that will reverse the values in the array passed in.
//You will need to pass in an array and the size of the array as arguments
//Cannot use a second array
void RevArray(int arr[], int size)
{
	int temp;
	for (int i = 0; i < size/2; ++i)
	{
		temp = arr[size - i - 1];
		arr[size - i - 1] = arr[i];
		arr[i] = temp;
	}
	for (int i = 0; i < size; ++i)
	{
		std::cout << arr[i] << ", ";
	}
	std::cout << "\n" << std::endl;
}

int main()
{
	say("Hi there!\n\n");
	int myArray[5] = { 1,2,3,4,5 };
	RevArray(myArray, 5);
	system("pause");
	return 0;
}