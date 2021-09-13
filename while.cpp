#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
	int my_number {0};
	int try_num {0};

	while (my_number >= 0)
	{
		cout << "Please enter any number other than " << try_num << ":";
		cin >> my_number;
		if (my_number == try_num)
			return 0;
		try_num++;
	}

	// cout << "Hey! you weren't supposed to enter 5!" << endl;


	return 0;
}
