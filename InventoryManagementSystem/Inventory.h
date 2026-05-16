#pragma once
#include "Product.h"

const int MAX_PRODUCTS = 100;

class Inventory {
    private:
        Product products[MAX_PRODUCTS];
        int productCount;

    public:
        Inventory();

        void addProduct(Product p);
        void removeProduct(int id);
        void updateProduct(int id);
        void displayInventory() const;
        double calculateTotalValue(int index) const; // Used for recursion.
        Product searchProduct(int id) const;
};