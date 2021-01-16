#include "Item.h"

Item::Item(std::string name, int weight, int value) {
    this->name = name;
    this->weight = weight;
    this->value = value;
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
