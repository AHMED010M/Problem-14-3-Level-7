#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


int RandomNumber(int From, int To)
{

	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

void FillaMatrix3x3(int arr[3][3], int Rows, int Cols)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			arr[i][j];

		}

	}


}

bool AreSclarMatrices(int arr[3][3], int Rows, int Cols)
{

	int FirstElement = arr[0][0];

	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			if (i == j && arr[i][j] != FirstElement)
			{
				return false;
			}
			else if (i != j && arr[i][j] != 0)
			{
				return false;
			}


		}

	}
	return true;

}

void PrintMatrix(int arr[3][3], int Rows, int Cols)
{

	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			printf(" %0*d ", 2, arr[i][j]);

		}
		cout << "\n";
	}

}



int main()
{

	srand(time(0));

	int arr1[3][3] = { { 5,0,0 }, { 0,5,0 }, { 0,0,5 } };



	FillaMatrix3x3(arr1, 3, 3);


	cout << "Matrix 1 : " << endl;
	PrintMatrix(arr1, 3, 3);

	if (AreSclarMatrices(arr1, 3, 3))
		cout << "YES: Matrix is Scalar." << endl;
	else
		cout << "NO: Matrix is Not Scalar." << endl;


}

