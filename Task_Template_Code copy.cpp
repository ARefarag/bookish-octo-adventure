#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Product {
public:
    int id;
    string name;
    double price;
    int stock;

    // TODO: Complete constructor
    Product(int i, string n, double p, int s) {
        id = i;
        name = n;
        price = p;
        stock = s;
    }

    // TODO: Complete display method
    void display() {
        cout << "ID: " << id << " | " << name << "Price: $" << price << " | " << "Stock: " << stock << endl;  
    }
};

class OrderItem {
public:
    int productId;
    int quantity;

    // TODO: Complete constructor
    OrderItem(int pid, int qty) {
        productId = pid;
        quantity = qty;
    }
};

class Customer {
public:
    int id;
    string name;
    string email;
    vector<int> orderIds;

    // TODO: Complete constructor
    Customer(int i, string n, string e) {
       id = i;
       name = n;
       email = e;
    }

    // TODO: Complete display method
    void display() {
        cout << "Customer ID: " << id << " | " << "Name: " name << endl;
    }
};

class Order {
public:
    int id;
    int customerId;
    vector<OrderItem> items;
    double total;

    // TODO: Complete constructor
    Order(int i, int cid) {
        id = i;
        customerId = cid;
    }

    // TODO: Complete calculateTotal
    void calculateTotal(vector<Product>& products) {
        total = 0;
        for(int i = 0; i < products.size(); i++){
            total += products[i].price;
        }
    }

    // TODO: Complete display
    void display(vector<Product>& products) {
        cout << "Order ID: " << id << " | " << "Customer: " << customerId << " | " << "Total: $" << total << endl;
        
    }
};

class ECommerceSystem {
public:
    vector<Product> products;
    vector<Customer> customers;
    vector<Order> orders;
    int nextProductId = 1;
    int nextCustomerId = 1;
    int nextOrderId = 1;

    // TODO: Complete addProduct
    void addProduct(string name, double price, int stock) {
        // Your code here
    }

    // TODO: Complete addCustomer
    void addCustomer(string name, string email) {
        // Your code here
    }

    // TODO: Complete createOrder
    void createOrder(int customerId) {
        // Your code here
    }

    // TODO: Complete addToOrder
    void addToOrder(int orderId, int productId, int quantity) {
        // Your code here
    }

    void displayAll() {
        cout << "\n=== PRODUCTS ===" << endl;

        cout << "\n=== CUSTOMERS ===" << endl;
        
        cout << "\n=== ORDERS ===" << endl;

    }
};

int main() {
    ECommerceSystem shop;

    // Sample data - don't modify
    shop.addProduct("Laptop", 999.99, 10);
    shop.addProduct("Mouse", 19.99, 50);
    shop.addCustomer("John Doe", "john@example.com");
    shop.addCustomer("Alice Smith", "alice@example.com");

    shop.createOrder(1);
    shop.addToOrder(1, 1, 1);
    shop.addToOrder(1, 2, 2);

    shop.createOrder(2);
    shop.addToOrder(2, 1, 1);

    shop.displayAll();

    return 0;
}