// A simple recursive CPP program to print
// first n Tribonacci numbers.
#include <iostream>
using namespace std;

int printTribRec(int n)
{
	if (n == 0 || n == 1)
		return n;

    if ( n == 2)
		return 1;
	if (n == 3)
		return 2;
	else
		return printTribRec(n - 1) +
			printTribRec(n - 2) +
			printTribRec(n - 3);
}

void printTrib(int n)
{
	for (int i = 1; i < n; i++)
		cout << printTribRec(i) << " ";
}

// Driver code
int main()
{
	int n = 10;
	printTrib(n);
	return 0;
}
