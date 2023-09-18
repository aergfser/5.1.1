#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> numbers = { 4, 7, 9, 14, 12 };

	[&]() {
		cout << "input data: ";
		for (auto &i : numbers)
		{
			cout << i << " ";
			if (i % 2 == 1) i *= 3;
		}

		cout << "\ninput data: ";
		for (auto i : numbers)
		{
			cout << i << " ";
		}
	}();
}