#include "Inventory.h"
#include <iostream>

Inventory::Inventory() {
    productCount = 0;
}

void Inventory::addProduct(Product p) {
    if (productCount < MAX_PRODUCTS) {
        products[productCount] = p;
        productCount++;
        std::cout << "Product added successfully.\n";
    }
    else {
        std::cout << "Inventory is full!\n";
    }
}

void Inventory::removeProduct(int id) {
    bool found = false;
    for (int i = 0; i < productCount; i++) {
        if (products[i].getProductID() == id) {
            found = true;
            for (int j = i; j < productCount - 1; j++) {
                products[j] = products[j + 1];
            }
            productCount--;
            std::cout << "Product removed successfully.\n";
            break;
        }
    }
    if (!found) {
        std::cout << "Product ID not found.\n";
    }
}

void Inventory::updateProduct(int id) {
    bool found = false;
    for (int i = 0; i < productCount; i++) {
        if (products[i].getProductID() == id) {
            int newQuantity;
            double newPrice;
            std::cout << "Enter New Quantity: ";
            std::cin >> newQuantity;
            std::cout << "Enter New Price: ";
            std::cin >> newPrice;

            products[i].setQuantity(newQuantity);
            products[i].setPrice(newPrice);
            std::cout << "Product updated successfully.\n";
            found = true;
            break;
        }
    }
    if (!found) {
        std::cout << "Product ID not found.\n";
    }
}

void Inventory::displayInventory() const {
    if (productCount == 0) {
        std::cout << "Inventory is empty.\n";
        return;
    }
    for (int i = 0; i < productCount; i++) {
        products[i].displayProduct();
    }
}

// Recursive function
double Inventory::calculateTotalValue(int index) const {
    if (index >= productCount) {
        return 0.0;
    }
    double currentProductValue = products[index].getPrice() * products[index].getQuantity();
    return currentProductValue + calculateTotalValue(index + 1);
}

Product Inventory::searchProduct(int id) const {
    for (int i = 0; i < productCount; i++) {
        if (products[i].getProductID() == id) {
            return products[i];
        }
    }
    return Product(-1, "", 0, 0.0);
}