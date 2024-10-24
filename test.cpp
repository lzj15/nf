#include <iostream> 
using namespace std;

int main() {
	long long n;
	cout << "Enter a positive integer: ";
	cin >> n;
	if (n <= 0) {
		cout << "Please enter a positive integer.";
		return 1;
	}while (n != 1) {
		if (n % 2 == 0) {
			n = n / 2;
		}
		else {
			n = 3 * n + 1;
		}cout << n << " ";
	}cout << endl;
	return 0;
}