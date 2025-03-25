#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <string>
#include <ctime>
#include <unordered_map>
#include <unordered_set>

using namespace std;

struct Product {
    int productId;
    string name;
    string category;
};

struct Order {
    int orderId;
    int productId;
    int quantity;
    string customerId;
    time_t orderDate;
};

int main() {
    vector<Product> products = {
        {101, "Laptop", "Electronics"},
        {102, "SmartPhone", "Electronics"},
        {103, "Coffee Maker", "Kitchen"},
        {104, "Blender", "Kitchen"},
        {105, "Desk Lamp", "Home"},
    };

    deque<string> recentCustomers = {"C001", "C002", "C003"};
    recentCustomers.push_back("C004");
    recentCustomers.push_back("C005");

    list<Order> orderHistory;
    orderHistory.push_back({1, 101, 1, "C001", time(0)});
    orderHistory.push_back({2, 102, 2, "C001", time(0)});
    orderHistory.push_back({3, 103, 1, "C001", time(0)});

    set<string> categories;
    for(const auto &product: products) {
        categories.insert(product.category);
    }

    map<int, int> productStock = {
        {101, 10},
        {102, 20},
        {103, 15},
        {104, 5},
        {105, 7}
    };

    multimap<string, Order> customerOrders;
    for(const auto &order: orderHistory) {
        customerOrders.insert({order.customerId, order});
    }

    unordered_map<string, string> customerData = {
        {"C001", "John"},
        {"C002", "Jane"},
        {"C003", "Bob"},
        {"C004", "Alice"},
        {"C005", "Charlie"}
    };

    unordered_set<int> uniqueProductIds;
    for(const auto &product: products) {
        uniqueProductIds.insert(product.productId);
    }

    return 0;
}