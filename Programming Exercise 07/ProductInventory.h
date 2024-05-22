#include <iostream>
#include <string>

using std::string;

class Product {
    //Base class
    protected:
        string Name;
        string Brand;
        double Price;
        int Quantity;
        string Description;
        string Category;

    public:
        Product(){} //Default constructor
           
        //Getters methods
        const string& getName() const{
            return Name;
        }

        const string& getBrand() const{
            return Brand;
        }

        const double& getPrice() const{
            return Price;
        }

        const int getQuantity() const{
            return Quantity;
        }

        const string& getDescription() const{
            return Description;
        }

        const string& getCategory() const{
            return Category;
        }

        //Setters methods
        void setName(const string& name){
            Name = name;
        }

        void setBrand(const string& brand){
            Brand = brand;
        }

        void setPrice(const double& price){
            Price = price;
        }

        void setQuantity(const int quantity){
            Quantity = quantity;
        }

        void setDescription(const string& description){
            Description = description;
        }

        void setCategory(const string& category){
            Category = category;
        }
};

class Clothing : public Product {
    //Derived class from Product
    private:
        string Size;
        string Color;
        string Material;
    public:

        Clothing(){} //Default constructor

        //Getters methods
        const string& getSize() const{
            return Size;
        }

        const string& getColor() const{
            return Color;
        }

        const string& getMaterial() const{
            return Material;
        }

        //Setters methods
        void setSize(const string& size){
            Size = size;
        }

        void setColor(const string& color){
            Color = color;
        }

        void setMaterial(const string& material){
            Material = material;
        }

        //Print method
        void print(){
            std::cout << "Name: " << getName() << std::endl;
            std::cout << "Brand: " << getBrand() << std::endl;
            std::cout << "Price: Php " << getPrice() << std::endl;
            std::cout << "Quantity: " << getQuantity() << " unit/s" << std::endl;
            std::cout << "Description: " << getDescription() << std::endl;
            std::cout << "Category: " << getCategory() << std::endl;
            std::cout << "Size: " << getSize() << std::endl;
            std::cout << "Color: " << getColor() << std::endl;
            std::cout << "Material: " << getMaterial() << std::endl;
        }
};

class Electronics: public Product{  
    //Derived class from Product
    private:
        string Model;
        int Warranty;
        string TechnicalSpecifications;

    public:
        Electronics(){} //Default constructor

        //Getters methods
        const string& getModel() const{
            return Model;
        }

        const int getWarranty() const{
            return Warranty;
        }

        const string& getTechnicalSpecifications() const{
            return TechnicalSpecifications;
        }

        //Setters methods
        void setModel(const string& model){
            Model = model;
        }

        void setWarranty(const int warranty){
            Warranty = warranty;
        }

        void setTechnicalSpecifications(const string& technicalSpecifications){
            TechnicalSpecifications = technicalSpecifications;
        }

        //Print method
        void print(){
            std::cout << "Name: " << getName() << std::endl;
            std::cout << "Brand: " << getBrand() << std::endl;
            std::cout << "Price: Php " << getPrice() << std::endl;
            std::cout << "Quantity: " << getQuantity() << " unit/s" << std::endl;
            std::cout << "Description: " << getDescription() << std::endl;
            std::cout << "Category: " << getCategory() << std::endl;
            std::cout << "Model: " << getModel() << std::endl;
            std::cout << "Warranty: " << getWarranty() << " months" << std::endl;
            std::cout << "Technical Specifications: " << getTechnicalSpecifications() << std::endl;
        }
};