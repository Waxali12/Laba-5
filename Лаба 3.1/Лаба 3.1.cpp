#include <iostream>

#include <math.h>

using namespace std;

void checkVaildInput()

{

	if (cin.fail())

	{

		throw "Incorrect input";

	}

}

void checkVaildParams(int n)

{

	if (n < 1)

	{

		throw "wrong data";

	}

}

int calculate(int n, int x)

{

	int i, j;

	double y, s;

	if (n < 1)

	{

		cout << "wrong data";

		return 0;

	}

	if (x <= 0)

	{

		y = 1;

		for (i = 0; i <= n - 1; i++)

		{

			y *= i * i - x;

		}

		cout << "\ny=" << x + y;

	}

	else

	{

		y = 0;

		i = 1;

		while (i <= n - 1)

		{

			s = 0;

			for (j = 0; j <= n - 1; j++)

			{

				s += x / (i + j);

			}

			y = y + s;

			i++;

		}

		cout << "\ny=" << y << "\n";

	}

}

int main()

{

	int x, n;

	try

	{

		float y = 0, y1 = 0;

		cout << "input n=";

		cin >> n;

		checkVaildInput();

		checkVaildParams(n);

		cout << "input x=";

		cin >> x;

		checkVaildInput();

		cout << "x= " << x << "; " << "y= " << calculate(n, x) << endl;

	}

	catch (const char* ex)

	{

		cout << ex << endl;

		return -1;

	}

	catch (...)

	{

		cout << "Unknown error" << endl;

		return -2;

	}

}