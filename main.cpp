// Kiah Warner J00963660 11/7/22
#include <iostream>
using namespace std;
int main()
{
	const int primes[]{ 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31 };

	int chose{};

	while (chose < 1 || chose > 1000) {
		cout << "Enter a positive integer between 1 and 1000: ";
		cin >> chose;
	}

	bool isp{ true };

	for (const int p : primes)
		if (p != chose)
			if ((chose % p) == 0) {
				if (isp)
					cout << chose << " is not prime\n";

				    cout << "It is divisible by " << p << '\n';
				isp = false;
			}
	if (isp)
		cout << chose << " is prime\n";
}


