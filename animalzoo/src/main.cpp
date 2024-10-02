#include <iostream>        
#include <string>  
#include "zoo.hpp"    
#include "zoo.cpp"

  
int main() {  
    Zoo zoo;  
  
    // 添加动物到动物园  
    zoo.addAnimal(std::make_unique<Lion>());  
    zoo.addAnimal(std::make_unique<Elephant>());  
    zoo.addAnimal(std::make_unique<Penguin>());  
  
    // 显示动物园中的动物符号  
    zoo.displayAnimals();  
  
    // 用户交互  
    char symbol;  
    std::cout << "Enter the animal symbol to make it sound (L for Lion, E for Elephant, P for Penguin, Q to quit): ";  
    while (std::cin >> symbol) {  
        if (symbol == 'Q' || symbol == 'q') {  
            break; // 用户输入Q或q退出程序  
        }  
        zoo.makeAnimalSoundBySymbol(symbol);  
        std::cout << "Enter the animal symbol to make it sound (L for Lion, E for Elephant, P for Penguin, Q to quit): ";  
    }  
  
    return 0;  
}