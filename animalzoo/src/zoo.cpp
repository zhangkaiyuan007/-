#include <vector>
#include <iostream>
#include <memory>
#include <unordered_map>
#include "zoo.hpp"




// Zoo 类，用于管理动物  
class Zoo {  
private:  
    std::vector<std::unique_ptr<Animal>> animals;  
  
public:  
    void addAnimal(std::unique_ptr<Animal> animal) {  
        animals.push_back(std::move(animal));  
    }  
  
    void displayAnimals() const {  
        std::cout << "Animals in the zoo: ";  
        for (const auto& animal : animals) {  
            std::cout << animal->getSymbol() << " ";  
        }  
        std::cout << std::endl;  
    }  
  
    void makeAnimalSoundBySymbol(char symbol) const {  
        for (const auto& animal : animals) {  
            if (animal->getSymbol() == symbol) {  
                std::cout << "You chose the " << animal->getType() << ". It says: ";  
                animal->makeSound();  
                return; // 找到匹配项后停止搜索  
            }  
        }  
        std::cout << "Animal with symbol '" << symbol << "' not found." << std::endl;  
    }  
};