#include <iostream>


bool is_prime(int n) {
	if (n == 1) return false;
	for (int d = 2; d * d <= n; d++)
	{
		if (n % d == 0) {
			return false;
			
		}
	}
	return true;
}
int main() {
	int a, b;
	std::cout << "Rande: " << std::endl;
	std::cin >> a >> b;

	int count = 0;
	for (int i = a; i <= b; i++)
	{
		
		if (is_prime(i)) {
			count++;
		}
	}


	std::cout << "Count:" << count << std::endl;
}