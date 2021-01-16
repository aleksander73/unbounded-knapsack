#ifndef ITEM_H_
#define ITEM_H_

#include <string>

class Item {
    private:
        std::string name;
        int weight;
        int value;
    public:
        Item(std::string name, int weight, int value);
        std::string getName();
        int getWeight();
        int getValue();
};

#endif
