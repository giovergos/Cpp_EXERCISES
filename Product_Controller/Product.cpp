#include "Product.h"
#include <string.h>

Product::Product() {}
Product::Product(const char *name, float price) {
    this->name=new char[strlen(name)+1];
    strcpy(this->name, name);
    this->price=price;
}
char* Product::getName() {
    return name;
}
void Product::setName(const char *name) {
    this->name=new char[strlen(name)+1];
    strcpy(this->name, name);
}
float Product::getPrice() {
    return price;
}
void Product::setPrice(float price) {
    this->price=price;
}
Product::~Product() {
    delete[] name;
}
