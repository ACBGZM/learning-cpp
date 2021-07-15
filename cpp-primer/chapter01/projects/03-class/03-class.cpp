#include <iostream>
#include "Sales_item.h"

int main() {
	Sales_item item1, item2;
	std::cin >> item1 >> item2;

	if (item1.same_isbn(item2)) {
		std::cout << item1 + item2 << std::endl;
		return 0;
	}
	else {
		std::cerr << "Data must refer to same ISBN" << std::endl;
		return -1;
	}
}

// input: 0-201-78345-X 3 20.00    0-201-78345-X 2 25.00
// input: 0-201-78345-X 3 20.00    0-203-78699-X 2 25.00

