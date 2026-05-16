# InventoryManagementSystem

A simple implementation of an Inventory Management System, created as an exercise and practice (for speedrunning).

## Why?

Why not?

## UMLs and Other Requirements

Given the UMLs below, define the header files and provide a program that will perform the following:

1. Create the Product and Inventory classes with the required attributes and methods.
2. Use sequential structures to initialize objects and perform operations like adding, removing, and updating products.
3. Use selection structures in the search function and update logic.
4. Use repetition structures to loop through the product list when displaying the inventory.
5. Implement the recursive function `calculateTotalValue()` in the Inventory class.
6. Implement an interactive menu using a do-while or while loop to allow the user to select options such as adding, removing, updating, displaying products, calculating total value, and searching for a product.
7. Use arrays to store the products in the inventory.
8. Demonstrate information hiding by making product attributes private and using accessor and mutator methods.

### UML Diagrams

#### Product
| Attributes |
| :--- |
| `- productID : int` |
| `- name : string` |
| `- quantity : int` |
| `- price : double` |

| Methods |
| :--- |
| `+ Product(productID, name, quantity, price)` |
| `+ getProductID() : int` |
| `+ getName() : string` |
| `+ getQuantity() : int` |
| `+ getPrice() : double` |
| `+ setProductID(int) : void` |
| `+ setName(string) : void` |
| `+ setQuantity(int) : void` |
| `+ setPrice(double) : void` |
| `+ displayProduct() : void` |

#### Inventory
| Attributes |
| :--- |
| `- products : Product[]` |
| `- productCount : int` |

| Methods |
| :--- |
| `+ Inventory()` |
| `+ addProduct(Product) : void` |
| `+ removeProduct(int) : void` |
| `+ updateProduct(int) : void` |
| `+ displayInventory() : void` |
| `+ calculateTotalValue(int) : double` |
| `+ searchProduct(int) : Product` |
