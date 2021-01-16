#include <iostream>

#include "Knapsack.h"

int main(int argc, char* argv[]) {
	std::vector<Item> items = std::vector<Item> {
		Item("Item 1", 5, 5),
		Item("Item 2", 3, 2),
		Item("Item 3", 1, 1),
		Item("Item 4", 2, 3),
		Item("Item 5", 4, 2),
		Item("Item 6", 5, 6)
	};
	Knapsack knapsack = Knapsack(15);
	std::map<Item, int> result = knapsack.fitItems(items);
	/*  Expect:
			- Item 3 x 1
			- Item 4 x 7
	*/
	for(auto const& [key, val] : result) {
		std::cout << key << " x " << val << std::endl;
	}
	return 0;
}
