#include <iostream>
#include <string>

using namespace std;

int main()
{
	int setA[] = {1, 2, 3, 4};
	int setB[] = {5, 2, 8, 2};
	int i, j, size, count = 0;
	int lengthA, lengthB;

	lengthA = sizeof(setA) / sizeof(setA[0]);
	lengthB = sizeof(setB) / sizeof(setB[0]);

	size = lengthA * lengthB;

	cout << "Cross Product of Set : { ";
	for (i = 0; i < lengthA; i++)
	{
		count = 0;
		for (j = 0; j < lengthB; j++)
		{
			if (setA[i] == setB[j])
			{
				count++;
			}
			if (count > 1)
			{
				continue;
			}
			cout << "( " << setA[i] << " , " << setB[j] << " )  ";
		}
	}
	cout << "}";
}
