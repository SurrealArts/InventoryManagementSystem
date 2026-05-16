#include "Product.h"
#include <iostream>

Product::Product() : productID(-1), name(""), quantity(0), price(0.0) {}

Product::Product(int id, std::string n, int q, double p) {
    productID = id;
    name = n;
    quantity = q;
    price = p;
}

int Product::getProductID() const { return productID; }
std::string Product::getName() const { return name; }
int Product::getQuantity() const { return quantity; }
double Product::getPrice() const { return price; }

void Product::setProductID(int id) { productID = id; }
void Product::setName(std::string n) { name = n; }
void Product::setQuantity(int q) { quantity = q; }
void Product::setPrice(double p) { price = p; }

void Product::displayProduct() const {
    std::cout
        << "Product ID: " << productID
        << ", Name: " << name
        << ", Quantity: " << quantity
        << ", Price: " << price
        << "\n";
}
