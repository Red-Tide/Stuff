#include <iostream>
#include <bitset>

uint8_t getIt() {
	return UINT8_MAX;
}

int main() {
	auto x = getIt();
	
	while (x) {
		std::cout << std::bitset<8>(x) << std::endl;
		x <<= 1;
	}
}
