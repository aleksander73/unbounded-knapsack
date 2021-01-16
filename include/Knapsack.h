#ifndef KNAPSACK_H_
#define KNAPSACK_H_

#include <map>
#include <vector>

#include "Item.h"

class Knapsack {
    private:
        int capacity;
    public:
        Knapsack(int capacity);
        std::map<Item, int> fitItems(std::vector<Item> items);
};

#endif
