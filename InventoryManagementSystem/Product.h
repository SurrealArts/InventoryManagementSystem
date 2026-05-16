#pragma once
#include <string>

class Product {
    private:
        int productID;
        std::string name;
        int quantity;
        double price;

    public:
        Product();
        Product(int id, std::string n, int q, double p);

        int getProductID() const;
        std::string getName() const;
        int getQuantity() const;
        double getPrice() const;

        void setProductID(int id);
        void setName(std::string n);
        void setQuantity(int q);
        void setPrice(double p);

        void displayProduct() const;
};
