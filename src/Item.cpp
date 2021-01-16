#include "Item.h"

Item::Item() {
    this->name = "";
    this->weight = 0;
    this->value = 0;
}

Item::Item(std::string name, int weight, int value) {
    this->name = name;
    this->weight = weight;
    this->value = value;
}

bool Item::operator<(const Item& rhs) const {
    return this->name.compare(rhs.name) < 0;
}

std::ostream& operator<<(std::ostream& os, const Item& item) {
    os << item.name;
    return os;
}

std::string Item::getName() {
    return this->name;
}

int Item::getWeight() {
    return this->weight;
}

int Item::getValue() {
    return this->value;
}
