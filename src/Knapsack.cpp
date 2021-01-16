#include "Knapsack.h"

Knapsack::Knapsack(int capacity) {
    this->capacity = capacity;
}

std::map<Item, int> Knapsack::fitItems(std::vector<Item> items) {
    std::vector<Item> bestFitForCapacity = std::vector<Item>(this->capacity + 1);
    std::vector<int> maxValueForCapacity = std::vector<int>(this->capacity + 1);
    for(int c = 1; c <= this->capacity; c++) {
        for(int i = 0; i < items.size(); i++) {
            Item item = items[i];
            if(item.getWeight() <= c) {
                int newValueForCapacityC = maxValueForCapacity[c - item.getWeight()] + item.getValue();
                if(maxValueForCapacity[c] < newValueForCapacityC) {
                    maxValueForCapacity[c] = newValueForCapacityC;
                    bestFitForCapacity[c] = item;
                }
            }
        }
    }
    std::map<Item, int> map = std::map<Item, int>();
    int weightLeft = this->capacity;
    while(weightLeft > 0) {
        Item item = bestFitForCapacity[weightLeft];
        if(item.getName().compare("") == 0) {
           break;
        }
        if(map.count(item) == 0) {
            map.insert(std::pair<Item, int>(item, 1));
        } else {
            map[item]++;
        }
        weightLeft -= item.getWeight();
    }
    return map;
}
