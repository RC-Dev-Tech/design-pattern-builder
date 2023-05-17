/*
 *  Design Pattern - Builder 建造者模式
 * 
 *  在這個 C++ 的範例中，我們定義了 Product 類別來表示正在創建的複雜物件，Builder 類別作為創建產品不同部分的介面，
 *  ConcreteBuilder 類別實現了 Builder 介面以創建並組裝 Product 的不同部分，而 Director 類別則負責控制創建產品的流程。
 *  在 main 函式中，我們創建了一個 Director 物件和 ConcreteBuilder 物件，然後使用 Director 控制 ConcreteBuilder 創建和組裝 Product。
 *  最後，我們取得 Product 並呼叫 Show 函式來顯示產品的部分內容。
 */

#include <iostream>
#include <string>

/*
 *  Product - 表示正在創建的複雜物件.
*/
class Product {
public:
    void SetPartA(const std::string& partA) {
        partA_ = partA;
    }

    void SetPartB(const std::string& partB) {
        partB_ = partB;
    }

    void Show() const {
        std::cout << "Product parts: PartA = " << partA_ << ", PartB = " << partB_ << std::endl;
    }

private:
    std::string partA_;
    std::string partB_;
};

/*
 *  Builder - 定義創建產品不同部分的介面.
*/
class Builder {
public:
    virtual void BuildPartA() = 0;
    virtual void BuildPartB() = 0;
    virtual Product* GetProduct() = 0;
};

/*
 *  ConcreteBuilder - 實現Builder介面以創建並組裝Product的不同部分.
*/
class ConcreteBuilder1 : public Builder {
public:
    void BuildPartA() override {
        product_->SetPartA("PartA");
    }

    void BuildPartB() override {
        product_->SetPartB("PartB");
    }

    Product* GetProduct() override {
        return product_;
    }

private:
    Product* product_ = new Product();
};

class ConcreteBuilder2 : public Builder {
public:
    void BuildPartA() override {
        product_->SetPartA("SuperPartA");
    }

    void BuildPartB() override {
        product_->SetPartB("SuperPartB");
    }

    Product* GetProduct() override {
        return product_;
    }

private:
    Product* product_ = new Product();
};

/*
 *  Director - 控制創建產品的流程，根據不同的需要使用Builder來創建和組裝Product.
*/
class Director {
public:
    void Construct(Builder* builder) {
        builder->BuildPartA();
        builder->BuildPartB();
    }
};

int main() {
    Director director;
    ConcreteBuilder1 builder1;
    ConcreteBuilder2 builder2;

    director.Construct(&builder1);
    Product* product1 = builder1.GetProduct();
    product1->Show();

    director.Construct(&builder2);
    Product* product2 = builder2.GetProduct();
    product2->Show();

    delete product1;
    delete product2;

    return 0;
}
