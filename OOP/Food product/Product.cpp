#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Product{
private:
    string name;
    double price;
    double date;
public:
    Product(){}
    Product(string name, double price, double date) :name(name),price(price),date(date){}
    void setName(string name) {
        this->name = name;
    }
    void setPrice(double price) {
        this->price = price;
    }
    void setDate(double date) {
        this->date = date;
    }
    string getName() {
        return name;
    }
    double getPrice() {
        return price;
    }
    double getDate() {
        return date;
    }
    virtual void sortByPrice(vector<Product> &vt){
        sort(vt.begin(),vt.end(),[](Product a, Product b){
            return a.getPrice() < b.getPrice();
        });
    }
    virtual void sortByDate(vector<Product> &vt){
        sort(vt.begin(),vt.end(),[](Product a, Product b){
            return a.getDate() < b.getDate();
        });

    }
    void display(){
        cout << "Name: " << Product::getName() << endl;
        cout << "Price: " << Product::getPrice() << endl;
        cout << "Date: " << Product::getDate() << endl; 
    }
};