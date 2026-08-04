#include "Product.cpp"
class HealthyFood : public Product{
private:
    int calories;
    double protein;
public: 
    HealthyFood(){}
    HealthyFood(string name, double price, double date, int calories, double protein) : Product(name,price,date){
        this->calories = calories;
        this->protein = protein;
    }
    int getCalories(){
        return calories;
    }
    double getProtein(){
        return protein;
    } 
    void display(){
        Product::display();
        cout << "Calories: " << this->calories << endl;
        cout << "Protein: " << this->protein << endl;
    }
    double percentProtein(){
        return protein/(double)calories;
    }
    virtual void sortMacro(vector<HealthyFood> &macro){
        sort(macro.begin(),macro.end(),[](const HealthyFood &a, const HealthyFood &b){
            return a.percentProtein() < b.percentProtein();
        });
    }
};