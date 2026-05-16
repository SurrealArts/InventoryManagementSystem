#include <iostream>
#include <string>
#include <iomanip>
#include "Inventory.h"
#include "Product.h"

using namespace std;

int main() {
    Inventory inventory;
    int choice;

    cout << fixed << setprecision(2);

    do {
        cout << "\nInventory Management System\n";
        cout << "1. Add a product\n";
        cout << "2. Remove a product\n";
        cout << "3. Update product information\n";
        cout << "4. View all products\n";
        cout << "5. Calculate total inventory value\n";
        cout << "6. Search for a product by ID\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";

        if (!(cin >> choice)) {
            cin.clear();
            cin.ignore(10000, '\n');
            choice = 0;
        }

        switch (choice) {
        case 1: {
            int id, quantity;
            string name;
            double price;

            cout << "Input Product ID: ";
            cin >> id;
            cout << "Input Name: ";
            cin.ignore();
            getline(cin, name);
            cout << "Input Quantity: ";
            cin >> quantity;
            cout << "Input Price: ";
            cin >> price;

            Product newProduct(id, name, quantity, price);
            inventory.addProduct(newProduct);
            break;
        }
        case 2: {
            int id;
            cout << "Input Product ID to remove: ";
            cin >> id;
            inventory.removeProduct(id);
            break;
        }
        case 3: {
            int id;
            cout << "Input Product ID to update: ";
            cin >> id;
            inventory.updateProduct(id);
            break;
        }
        case 4: {
            inventory.displayInventory();
            break;
        }
        case 5: {
            double total = inventory.calculateTotalValue(0);
            cout << "Total Inventory Value = " << total << "\n";
            break;
        }
        case 6: {
            int id;
            cout << "Input Product ID to search: ";
            cin >> id;
            Product foundProduct = inventory.searchProduct(id);

            if (foundProduct.getProductID() != -1) {
                foundProduct.displayProduct();
            }
            else {
                cout << "Product not found.\n";
            }
            break;
        }
        case 7: {
            cout << "Exiting system...\n";
            break;
        }
        default: {
            cout << "Invalid choice. Please try again.\n";
            break;
        }
        }
    } while (choice != 7);

    return 0;
}