#include <iostream>
#include "Sales_item.h"
int main() {
	Sales_item total;
	if (std::cin >> total) {
		Sales_item trans;
		while (std::cin>>trans) {
			if (total.same_isbn(trans)) {
				total += trans;
			}
			else {
				std::cout << total << std::endl;
				total = trans;
			}

		}
		std::cout << total << std::endl; // 打印最后一本书的结果
	}
	else {
		std::cerr << "No data." << std::endl;
		return -1;
	}
	return 0;
}

// input: aaaa 5 10   aaaa 4 20    aaaa 3 100    bbbb 1 10    bbbb 2 50    cccc 1 40