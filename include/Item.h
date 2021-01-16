#ifndef ITEM_H_
#define ITEM_H_

#include <string>

class Item {
    private:
        std::string name;
        int weight;
        int value;
    public:
        Item();
        Item(std::string name, int weight, int value);
        bool operator<(const Item& rhs) const;
        friend std::ostream& operator<<(std::ostream& os, const Item& item);
        std::string getName();
        int getWeight();
        int getValue();
};

#endif
