#ifndef ZOO_HPP
#define ZOO_HPP
#include <iostream>
#include <string>


// 抽象基类 Animal  
class Animal {  
public:  
    virtual ~Animal() = default;  
    virtual void makeSound() const = 0; // 纯虚函数，输出动物的叫声  
    virtual std::string getType() const = 0; // 返回动物的类型  
    virtual char getSymbol() const = 0; // 返回动物的符号  
};  
  
// Lion 类，继承自 Animal  
class Lion : public Animal {  
public:  
    void makeSound() const override {  
        std::cout << "Roar!" << std::endl;  
    }  
    std::string getType() const override {  
        return "Lion";  
    }  
    char getSymbol() const override {  
        return 'L';  
    }  
};  
  
// Elephant 类，继承自 Animal  
class Elephant : public Animal {  
public:  
    void makeSound() const override {  
        std::cout << "Trumpet!" << std::endl;  
    }  
    std::string getType() const override {  
        return "Elephant";  
    }  
    char getSymbol() const override {  
        return 'E';  
    }  
};  
  
// Penguin 类，继承自 Animal  
class Penguin : public Animal {  
public:  
    void makeSound() const override {  
        std::cout << "Squawk!" << std::endl;  
    }  
    std::string getType() const override {  
        return "Penguin";  
    }  
    char getSymbol() const override {  
        return 'P';  
    }  
};

#endif // ZOO_HPP
