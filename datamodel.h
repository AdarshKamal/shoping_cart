#include <iostream>
#include <string>
using namespace std;

// forward declaration

class Item;
class Cart;

class Product
{
    int id;
    string name;
    int price;

public:
    // assignment
    Product(int u_id, string name, int price)
    {
        id = u_id;
        this->name = name;
        this->price = price;
    }

    string getDisplayName()
    {

        return name + " :Rs" + to_string(price) + "\n";
    }
    friend class Items;
};

class Items
{
    const Product product;
    int quantity;

public:
    // initialization list
    Items(Product p, int q) : product(p), quantity(q) {}
    int getItemPrice()
    {
        return quantity * product.price;
    }
    string getItemInfo()
    {
        return to_string(quantity) + "," + product.name + "Rs." + to_string(quantity * product.price);
    }
};
